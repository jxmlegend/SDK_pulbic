/* Copyright (c) 2007 Scott Lembcke
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/// @defgroup cpBBB cpBB
/// Chipmunk's axis-aligned 2D bounding box type along with a few handy routines.
/// @{

/// Chipmunk's axis-aligned 2D bounding box type. (left, bottom, right, top)
typedef struct cpBB{
	cpFloat l, b, r ,t;
} cpBB;

/// Convenience constructor for cpBB structs.
static __inline cpBB cpBBNew(const cpFloat l, const cpFloat b,
		const cpFloat r, const cpFloat t)
{
    cpBB bb;
    bb.l = l;
    bb.b = b;
    bb.r = r;
    bb.t = t;
    return bb;
}

/// Returns true if @c a and @c b intersect.
static __inline cpBool cpBBIntersects(const cpBB a, const cpBB b)
{
	return (a.l <= b.r && b.l <= a.r && a.b <= b.t && b.b <= a.t);
}

/// Returns true if @c other lies completely within @c bb.
static __inline cpBool cpBBContainsBB(const cpBB bb, const cpBB other)
{
	return (bb.l <= other.l && bb.r >= other.r && bb.b <= other.b && bb.t >= other.t);
}

/// Returns true if @c bb contains @c v.
static __inline cpBool cpBBContainsVect(const cpBB bb, const cpVect v)
{
	return (bb.l <= v.x && bb.r >= v.x && bb.b <= v.y && bb.t >= v.y);
}

/// Returns a bounding box that holds both bounding boxes.
static __inline cpBB cpBBMerge(const cpBB a, const cpBB b){
	return cpBBNew(
		cpfmin(a.l, b.l),
		cpfmin(a.b, b.b),
		cpfmax(a.r, b.r),
		cpfmax(a.t, b.t)
	);
}

/// Returns a bounding box that holds both @c bb and @c v.
static __inline cpBB cpBBExpand(const cpBB bb, const cpVect v){
	return cpBBNew(
		cpfmin(bb.l, v.x),
		cpfmin(bb.b, v.y),
		cpfmax(bb.r, v.x),
		cpfmax(bb.t, v.y)
	);
}

/// Returns the area of the bounding box.
static __inline cpFloat cpBBArea(cpBB bb)
{
	return (bb.r - bb.l)*(bb.t - bb.b);
}

/// Merges @c a and @c b and returns the area of the merged bounding box.
static __inline cpFloat cpBBMergedArea(cpBB a, cpBB b)
{
	return (cpfmax(a.r, b.r) - cpfmin(a.l, b.l))*(cpfmax(a.t, b.t) - cpfmin(a.b, b.b));
}

/// Return true if the bounding box intersects the line segment with ends @c a and @c b.
static __inline cpBool cpBBIntersectsSegment(cpBB bb, cpVect a, cpVect b)
{
	cpBB seg_bb = cpBBNew(cpfmin(a.x, b.x), cpfmin(a.y, b.y), cpfmax(a.x, b.x), cpfmax(a.y, b.y));
	if(cpBBIntersects(bb, seg_bb)){
		cpVect axis = cpv(b.y - a.y, a.x - b.x);
		cpVect offset = cpv((a.x + b.x - bb.r - bb.l), (a.y + b.y - bb.t - bb.b));
		cpVect extents = cpv(bb.r - bb.l, bb.t - bb.b);
		
		return (cpfabs(cpvdot(axis, offset)) < cpfabs(axis.x*extents.x) + cpfabs(axis.y*extents.y));
	}
	
	return cpFalse;
}

/// Clamp a vector to a bounding box.
cpVect cpBBClampVect(const cpBB bb, const cpVect v); // clamps the vector to lie within the bbox

// TODO edge case issue
/// Wrap a vector to a bounding box.
cpVect cpBBWrapVect(const cpBB bb, const cpVect v); // wrap a vector to a bbox

///@}
