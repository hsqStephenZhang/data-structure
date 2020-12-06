#pragma once

#define IsBlack(p) ( ! (p) || ( RB_BLACK == (p)->color ) )
#define IsRed(p) (!(IsBlack(p)))
#define BlackHeightUpdated(x) \
   ( stature( (x).lc ) == stature( (x).rc ) ) && \
   ( (x).height == ( IsRed(& x) ? stature( (x).lc ) : stature( (x).lc ) + 1 ) ) \
)
