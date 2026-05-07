// Class: WorldMapActionCaches


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionCaches::Start() */

void __thiscall WorldMapActionCaches::Start(WorldMapActionCaches *this)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
          ::empty((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                   *)this);
  if (cVar1 == '\0') {
    local_10 = std::
               map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
               ::begin((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                        *)this);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_10);
    *(undefined4 *)(this + 0x30) = *puVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapActionCaches::WorldMapActionCaches() */

void __thiscall WorldMapActionCaches::WorldMapActionCaches(WorldMapActionCaches *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* WorldMapActionCaches::Clear() */

void __thiscall WorldMapActionCaches::Clear(WorldMapActionCaches *this)

{
  _Rb_tree_node *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  p_Var1 = (_Rb_tree_node *)FUN_0454363c(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<int,std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>,std::_Select1st<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>,std::_Select1st<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
              *)this,p_Var1);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  *puVar2 = uVar3;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  *puVar2 = 0;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  *puVar2 = uVar3;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* WorldMapActionCaches::~WorldMapActionCaches() */

void __thiscall WorldMapActionCaches::~WorldMapActionCaches(WorldMapActionCaches *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_0454363c(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<int,std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>,std::_Select1st<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>,std::_Select1st<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
              *)this,p_Var1);
  return;
}


/* WorldMapActionCaches::End() */

void __thiscall WorldMapActionCaches::End(WorldMapActionCaches *this)

{
  std::
  map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
  ::erase((int *)this);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapActionCaches::Add(int, std::string const&, int) */

void __thiscall
WorldMapActionCaches::Add(WorldMapActionCaches *this,int param_1,string *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
  *this_00;
  int local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  cVar1 = FUN_0547419c(param_2);
  if ((cVar1 == '\0') && (0 < param_3)) {
    local_28 = std::
               map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
               ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                       *)this,local_34);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_18);
    if (bVar2) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar3 + 8));
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar3 + 8));
      local_20 = FUN_0454507c(uVar4,uVar5,param_2);
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
      if (bVar2) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + param_3;
        goto LAB_04547208;
      }
    }
    ActionCached::ActionCached((ActionCached *)&local_18);
    thunk_FUN_05475e00((ActionCached *)&local_18,param_2);
    local_10 = param_3;
    this_00 = (vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,local_34);
    std::
    vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>::
    push_back(this_00,(ActionCached *)&local_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
  }
LAB_04547208:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void WorldMapActionCaches::Add<ActionShowBoardDlg>(int, int) */

void __thiscall
WorldMapActionCaches::Add<ActionShowBoardDlg>(WorldMapActionCaches *this,int param_1,int param_2)

{
  long lVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ActionShowBoardDlg::StaticGetClass();
  __s = (char *)FUN_04543580(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_10,__s);
  Add(this,param_1,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void WorldMapActionCaches::Add<ActionShowSalesUI>(int, int) */

void __thiscall
WorldMapActionCaches::Add<ActionShowSalesUI>(WorldMapActionCaches *this,int param_1,int param_2)

{
  long lVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ActionShowSalesUI::StaticGetClass();
  __s = (char *)FUN_04543580(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_10,__s);
  Add(this,param_1,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void WorldMapActionCaches::Add<ActionDinosaurDanger>(int, int) */

void __thiscall
WorldMapActionCaches::Add<ActionDinosaurDanger>(WorldMapActionCaches *this,int param_1,int param_2)

{
  long lVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ActionDinosaurDanger::StaticGetClass();
  __s = (char *)FUN_04543580(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_10,__s);
  Add(this,param_1,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void WorldMapActionCaches::Add<ActionLimitedGacha>(int, int) */

void __thiscall
WorldMapActionCaches::Add<ActionLimitedGacha>(WorldMapActionCaches *this,int param_1,int param_2)

{
  long lVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ActionLimitedGacha::StaticGetClass();
  __s = (char *)FUN_04543580(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_10,__s);
  Add(this,param_1,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void WorldMapActionCaches::Add<ActionLuaAct>(int, int) */

void __thiscall
WorldMapActionCaches::Add<ActionLuaAct>(WorldMapActionCaches *this,int param_1,int param_2)

{
  long lVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ActionLuaAct::StaticGetClass();
  __s = (char *)FUN_04543580(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_10,__s);
  Add(this,param_1,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void WorldMapActionCaches::Add<ActionLoginReward>(int, int) */

void __thiscall
WorldMapActionCaches::Add<ActionLoginReward>(WorldMapActionCaches *this,int param_1,int param_2)

{
  long lVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ActionLoginReward::StaticGetClass();
  __s = (char *)FUN_04543580(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_10,__s);
  Add(this,param_1,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionShowBoardDlg>(bool&) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionShowBoardDlg>(WorldMapActionCaches *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
             ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                     *)this,(int *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    lVar3 = ActionShowBoardDlg::StaticGetClass();
    __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
    std::string::string(asStack_20,__s);
    nop();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,(int *)(this + 0x30));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(psVar4,asStack_20);
      if ((cVar1 != '\0') &&
         (pWVar5 = (WorldMapAction *)ActionShowBoardDlg::CreateIfNeed(param_1),
         pWVar5 != (WorldMapAction *)0x0)) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*(int *)(lVar3 + 8) < 1) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
          ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                   *)this_00,local_10);
        }
        goto LAB_04547810;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
    pWVar5 = (WorldMapAction *)0x0;
LAB_04547810:
    std::string::~string(asStack_20);
  }
  else {
    pWVar5 = (WorldMapAction *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionLoginReward>(bool&) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionLoginReward>(WorldMapActionCaches *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
             ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                     *)this,(int *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    lVar3 = ActionLoginReward::StaticGetClass();
    __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
    std::string::string(asStack_20,__s);
    nop();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,(int *)(this + 0x30));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(psVar4,asStack_20);
      if ((cVar1 != '\0') &&
         (pWVar5 = (WorldMapAction *)EA::Thread::GetModuleHandleFromAddress(param_1),
         pWVar5 != (WorldMapAction *)0x0)) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*(int *)(lVar3 + 8) < 1) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
          ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                   *)this_00,local_10);
        }
        goto LAB_0454799c;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
    pWVar5 = (WorldMapAction *)0x0;
LAB_0454799c:
    std::string::~string(asStack_20);
  }
  else {
    pWVar5 = (WorldMapAction *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionBossChallenge>(bool&) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionBossChallenge>(WorldMapActionCaches *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
             ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                     *)this,(int *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    lVar3 = ActionBossChallenge::StaticGetClass();
    __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
    std::string::string(asStack_20,__s);
    nop();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,(int *)(this + 0x30));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(psVar4,asStack_20);
      if ((cVar1 != '\0') &&
         (pWVar5 = (WorldMapAction *)ActionBossChallenge::CreateIfNeed(param_1),
         pWVar5 != (WorldMapAction *)0x0)) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*(int *)(lVar3 + 8) < 1) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
          ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                   *)this_00,local_10);
        }
        goto LAB_04547b28;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
    pWVar5 = (WorldMapAction *)0x0;
LAB_04547b28:
    std::string::~string(asStack_20);
  }
  else {
    pWVar5 = (WorldMapAction *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionLimitedGacha>(bool&) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionLimitedGacha>(WorldMapActionCaches *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
             ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                     *)this,(int *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    lVar3 = ActionLimitedGacha::StaticGetClass();
    __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
    std::string::string(asStack_20,__s);
    nop();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,(int *)(this + 0x30));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(psVar4,asStack_20);
      if ((cVar1 != '\0') &&
         (pWVar5 = (WorldMapAction *)ActionLimitedGacha::CreateIfNeed(param_1),
         pWVar5 != (WorldMapAction *)0x0)) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*(int *)(lVar3 + 8) < 1) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
          ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                   *)this_00,local_10);
        }
        goto LAB_04547cb4;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
    pWVar5 = (WorldMapAction *)0x0;
LAB_04547cb4:
    std::string::~string(asStack_20);
  }
  else {
    pWVar5 = (WorldMapAction *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionLuaAct>(bool&, int) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionLuaAct>(WorldMapActionCaches *this,bool *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x30) == param_2) {
    local_10 = std::
               map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
               ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                       *)this,(int *)(this + 0x30));
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
    if (cVar1 == '\0') {
      lVar3 = ActionLuaAct::StaticGetClass();
      __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
      std::string::string(asStack_20,__s);
      nop();
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)std::
                   map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                   ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                                 *)this,(int *)(this + 0x30));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      while( true ) {
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar2) break;
        psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar1 = std::operator==(psVar4,asStack_20);
        if ((cVar1 != '\0') &&
           (pWVar5 = (WorldMapAction *)ActionLuaAct::CreateIfNeed(param_1,*(int *)(this + 0x30)),
           pWVar5 != (WorldMapAction *)0x0)) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if (*(int *)(lVar3 + 8) < 1) {
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_10,(__normal_iterator *)&local_18);
            std::
            vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
            ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                     *)this_00,local_10);
          }
          goto LAB_04547e50;
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      }
      pWVar5 = (WorldMapAction *)0x0;
LAB_04547e50:
      std::string::~string(asStack_20);
      goto LAB_04547e60;
    }
  }
  pWVar5 = (WorldMapAction *)0x0;
LAB_04547e60:
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionShowSalesUI>(bool&) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionShowSalesUI>(WorldMapActionCaches *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
             ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                     *)this,(int *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    lVar3 = ActionShowSalesUI::StaticGetClass();
    __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
    std::string::string(asStack_20,__s);
    nop();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,(int *)(this + 0x30));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(psVar4,asStack_20);
      if ((cVar1 != '\0') &&
         (pWVar5 = (WorldMapAction *)ActionShowSalesUI::CreateIfNeed(param_1),
         pWVar5 != (WorldMapAction *)0x0)) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*(int *)(lVar3 + 8) < 1) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
          ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                   *)this_00,local_10);
        }
        goto LAB_04547fdc;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
    pWVar5 = (WorldMapAction *)0x0;
LAB_04547fdc:
    std::string::~string(asStack_20);
  }
  else {
    pWVar5 = (WorldMapAction *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapAction* WorldMapActionCaches::Pop<ActionDinosaurDanger>(bool&) */

WorldMapAction * __thiscall
WorldMapActionCaches::Pop<ActionDinosaurDanger>(WorldMapActionCaches *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *__s;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  string *psVar4;
  WorldMapAction *pWVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
             ::find((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                     *)this,(int *)(this + 0x30));
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_10,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    lVar3 = ActionDinosaurDanger::StaticGetClass();
    __s = (char *)FUN_04543580(*(undefined8 *)(lVar3 + 8));
    std::string::string(asStack_20,__s);
    nop();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)std::
                 map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                 ::operator[]((map<int,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>>>>
                               *)this,(int *)(this + 0x30));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = std::operator==(psVar4,asStack_20);
      if ((cVar1 != '\0') &&
         (pWVar5 = (WorldMapAction *)ActionDinosaurDanger::CreateIfNeed(param_1),
         pWVar5 != (WorldMapAction *)0x0)) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*(int *)(lVar3 + 8) < 1) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_18);
          std::
          vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
          ::erase((vector<WorldMapActionCaches::ActionCached,std::allocator<WorldMapActionCaches::ActionCached>>
                   *)this_00,local_10);
        }
        goto LAB_04548168;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
    pWVar5 = (WorldMapAction *)0x0;
LAB_04548168:
    std::string::~string(asStack_20);
  }
  else {
    pWVar5 = (WorldMapAction *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return pWVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

