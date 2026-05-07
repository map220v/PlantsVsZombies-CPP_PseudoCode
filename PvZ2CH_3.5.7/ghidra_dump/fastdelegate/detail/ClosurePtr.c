// Class: fastdelegate::detail::ClosurePtr<void(fastdelegate::detail::GenericClass::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&)>


/* void fastdelegate::detail::ClosurePtr<void (fastdelegate::detail::GenericClass::*)(std::wstring
   const&, std::vector<std::wstring, std::allocator<std::wstring > > const&), void (*)(std::wstring
   const&, std::vector<std::wstring, std::allocator<std::wstring > > const&), void (*)(std::wstring
   const&, std::vector<std::wstring, std::allocator<std::wstring > >
   const&)>::bindmemfunc<ConsoleListener, void (ConsoleListener::*)(std::wstring const&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&)>(ConsoleListener*, void
   (ConsoleListener::*)(std::wstring const&, std::vector<std::wstring, std::allocator<std::wstring >
   > const&)) */

void fastdelegate::detail::
     ClosurePtr<void(fastdelegate::detail::GenericClass::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&)>
     ::
     bindmemfunc<ConsoleListener,void(ConsoleListener::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&)>
               (ConsoleListener *param_1,_func_void_wstring_ptr_vector_ptr *param_2)

{
  GenericClass *pGVar1;
  ConsoleListener *in_x2;
  _func_void_wstring_ptr_vector_ptr *in_x3;
  
  pGVar1 = SimplifyMemFunc<16>::
           Convert<ConsoleListener,void(ConsoleListener::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(fastdelegate::detail::GenericClass::*)()>
                     ((SimplifyMemFunc<16> *)param_2,in_x2,in_x3,(_func_void *)(param_1 + 8));
  *(GenericClass **)param_1 = pGVar1;
  return;
}

