#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport thrift.py3.types




cdef extern from "src/gen-cpp2/module_types.h" namespace "cpp2":
    cdef cppclass cEmpty__isset "cpp2::Empty::__isset":

    # Forward Declaration
    cdef cppclass cEmpty "cpp2::Empty"

    cdef cppclass cEmpty "cpp2::Empty":
        cEmpty() except +
        cEmpty(const cEmpty&) except +
        bint operator==(cEmpty&)
        cEmpty__isset __isset


cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cEmpty] move(unique_ptr[cEmpty])

# Forward Definition of the cython struct
cdef class Empty(thrift.py3.types.Struct)

cdef class Empty(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cEmpty] c_Empty

    @staticmethod
    cdef create(shared_ptr[cEmpty] c_Empty)



