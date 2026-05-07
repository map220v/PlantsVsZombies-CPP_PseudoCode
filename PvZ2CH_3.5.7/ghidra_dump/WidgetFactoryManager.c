// Class: WidgetFactoryManager


/* WidgetFactoryManager::~WidgetFactoryManager() */

void __thiscall WidgetFactoryManager::~WidgetFactoryManager(WidgetFactoryManager *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_04b80828(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,WidgetFactoryImpl*>,std::_Select1st<std::pair<std::string_const,WidgetFactoryImpl*>>,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,WidgetFactoryImpl*>,std::_Select1st<std::pair<std::string_const,WidgetFactoryImpl*>>,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
              *)this,p_Var1);
  return;
}


/* WidgetFactoryManager::InitWidgetFactory() */

void __thiscall WidgetFactoryManager::InitWidgetFactory(WidgetFactoryManager *this)

{
  char cVar1;
  string *psVar2;
  undefined8 *puVar3;
  
  cVar1 = std::
          map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
          ::empty((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                   *)this);
  if (cVar1 != '\0') {
    psVar2 = (string *)TplWidgetFactoryImpl<Sexy::Widget>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<PVZ2UIButton>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIWidgetRadio>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIWidgetText>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIWidgetImage>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIWidgetAnim>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIWidgetBackground>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UITabControl>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UITabContent>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIScrollControl>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
    psVar2 = (string *)TplWidgetFactoryImpl<UIPage>::GetTypeName();
    puVar3 = (undefined8 *)
             std::
             map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
             ::operator[]((map<std::string,WidgetFactoryImpl*,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetFactoryImpl*>>>
                           *)this,psVar2);
    *puVar3 = &InitWidgetFactory()::s_Factory;
  }
  return;
}


/* WidgetFactoryManager::WidgetFactoryManager() */

void __thiscall WidgetFactoryManager::WidgetFactoryManager(WidgetFactoryManager *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  InitWidgetFactory(this);
  return;
}

