// Class: fastdelegate::detail::SimplifyMemFunc<16>


/* fastdelegate::detail::GenericClass*
   fastdelegate::detail::SimplifyMemFunc<16>::Convert<ConsoleListener, void
   (ConsoleListener::*)(std::wstring const&, std::vector<std::wstring, std::allocator<std::wstring >
   > const&), void (fastdelegate::detail::GenericClass::*)()>(ConsoleListener*, void
   (ConsoleListener::*)(std::wstring const&, std::vector<std::wstring, std::allocator<std::wstring >
   > const&), void (fastdelegate::detail::GenericClass::*&)()) */

GenericClass * __thiscall
fastdelegate::detail::SimplifyMemFunc<16>::
Convert<ConsoleListener,void(ConsoleListener::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(fastdelegate::detail::GenericClass::*)()>
          (SimplifyMemFunc<16> *this,ConsoleListener *param_1,
          _func_void_wstring_ptr_vector_ptr *param_2,_func_void *param_3)

{
  *(ConsoleListener **)param_3 = param_1;
  *(_func_void_wstring_ptr_vector_ptr **)(param_3 + 8) = param_2;
  return (GenericClass *)this;
}

