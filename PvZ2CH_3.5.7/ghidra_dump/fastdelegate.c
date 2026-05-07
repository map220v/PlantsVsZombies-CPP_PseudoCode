// Class: fastdelegate


/* fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, void> fastdelegate::MakeDelegate<ConsoleListener,
   ConsoleListener, std::wstring const&, std::vector<std::wstring, std::allocator<std::wstring > >
   const&, void>(ConsoleListener*, void (ConsoleListener::*)(std::wstring const&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&)) */

ConsoleListener *
fastdelegate::
MakeDelegate<ConsoleListener,ConsoleListener,std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
          (ConsoleListener *param_1,_func_void_wstring_ptr_vector_ptr *param_2)

{
  ConsoleListener *in_x8;
  
  FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
  ::FastDelegate2<ConsoleListener,ConsoleListener>
            (in_x8,(_func_void_wstring_ptr_vector_ptr *)param_1);
  return in_x8;
}

