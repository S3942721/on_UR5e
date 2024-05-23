#### A collection of useful helper functions


def is_approx_equal(a, b, epsilon) -> bool:
    return abs(b-a) < epsilon

def clamp(min_v, max_v, v):
    if (min_v > max_v):
        min_v, max_v = max_v, min_v
    return min(max_v, max(min_v, v))