// Class: fastdelegate::FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>


/* fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&,
   void>::FastDelegate2(fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, void> const&) */

void __thiscall
fastdelegate::
FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
::FastDelegate2(FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                *this,FastDelegate2 *param_1)

{
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
            ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  DelegateMemento::SetMementoFrom((DelegateMemento *)this,(DelegateMemento *)param_1);
  return;
}


/* fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&,
   void>::TEMPNAMEPLACEHOLDERVALUE(fastdelegate::FastDelegate2<std::wstring const&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&, void> const&) */

void __thiscall
fastdelegate::
FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
::operator=(FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
            *this,FastDelegate2 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}


/* fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, void>::TEMPNAMEPLACEHOLDERVALUE(std::wstring const&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&) const */

void __thiscall
fastdelegate::
FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
::operator()(FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
             *this,wstring *param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = FUN_03c6e944(*(undefined8 *)this);
  auVar3 = FUN_03c6e940(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  lVar1 = (long)auVar3._8_8_ >> 1;
  if ((auVar3._8_8_ & 1) != 0) {
    (**(code **)(auVar3._0_8_ + *(long *)(lVar2 + lVar1)))(lVar2 + lVar1,param_1);
    return;
  }
  (*auVar3._0_8_)(lVar2 + lVar1,param_1,param_2);
  return;
}


/* fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, void>::FastDelegate2() */

void __thiscall
fastdelegate::
FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
::FastDelegate2(FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                *this)

{
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
            ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
            ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  return;
}


/* fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, void>::FastDelegate2<ConsoleListener,
   ConsoleListener>(ConsoleListener*, void (ConsoleListener::*)(std::wstring const&,
   std::vector<std::wstring, std::allocator<std::wstring > > const&)) */

void fastdelegate::
     FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
     ::FastDelegate2<ConsoleListener,ConsoleListener>
               (ConsoleListener *param_1,_func_void_wstring_ptr_vector_ptr *param_2)

{
  _func_void_wstring_ptr_vector_ptr *extraout_x0;
  
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
            ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)param_1);
  nop();
  detail::
  ClosurePtr<void(fastdelegate::detail::GenericClass::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&),void(*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&)>
  ::
  bindmemfunc<ConsoleListener,void(ConsoleListener::*)(std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&)>
            (param_1,extraout_x0);
  return;
}

