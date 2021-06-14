import pygs
from numpy.ctypeslib import ndpointer
import ctypes
import numpy as np
libName = 'MWTransferArr64.dll'

libc_mw = ctypes.CDLL(libName)
