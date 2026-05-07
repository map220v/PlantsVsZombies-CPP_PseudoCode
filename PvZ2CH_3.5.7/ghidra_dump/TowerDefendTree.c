// Class: TowerDefendTree


/* TowerDefendTree::~TowerDefendTree() */

void __thiscall TowerDefendTree::~TowerDefendTree(TowerDefendTree *this)

{
  std::_Destroy<MatchPlantData*>(*(MatchPlantData **)this,*(MatchPlantData **)(this + 8));
  std::_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::~_Vector_base
            ((_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)this);
  return;
}


void __thiscall TowerDefendTree::~TowerDefendTree(TowerDefendTree *this)

{
  std::_Destroy<MatchPlantData*>(*(MatchPlantData **)this,*(MatchPlantData **)(this + 8));
  std::_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::~_Vector_base
            ((_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)this);
  return;
}


void __thiscall TowerDefendTree::~TowerDefendTree(TowerDefendTree *this)

{
  std::_Destroy<MatchPlantData*>(*(MatchPlantData **)this,*(MatchPlantData **)(this + 8));
  std::_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::~_Vector_base
            ((_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)this);
  return;
}


void __thiscall TowerDefendTree::~TowerDefendTree(TowerDefendTree *this)

{
  std::_Destroy<MatchPlantData*>(*(MatchPlantData **)this,*(MatchPlantData **)(this + 8));
  std::_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::~_Vector_base
            ((_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)this);
  return;
}


/* TowerDefendTree::TEMPNAMEPLACEHOLDERVALUE(TowerDefendTree&&) */

TowerDefendTree * __thiscall
TowerDefendTree::operator=(TowerDefendTree *this,TowerDefendTree *param_1)

{
  std::vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::operator=
            ((vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)this,
             (vector *)param_1);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035aef74 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TowerDefendTree::TowerDefendTree(TowerDefendTree const&) */

void __thiscall TowerDefendTree::TowerDefendTree(TowerDefendTree *this,TowerDefendTree *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  TowerDefendTreeInfo *pTVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_0358f5b4(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::_Vector_base
            ((ulong)this,paVar2);
  FUN_035a89c0(*(undefined8 *)param_1);
  uVar3 = FUN_035a8a10(*(undefined8 *)(param_1 + 8));
  pTVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<TowerDefendTreeInfo_const*,std::vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>>,TowerDefendTreeInfo*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(TowerDefendTreeInfo **)(this + 8) = pTVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendTree::TEMPNAMEPLACEHOLDERVALUE(TowerDefendTree const&) */

TowerDefendTree * __thiscall
TowerDefendTree::operator=(TowerDefendTree *this,TowerDefendTree *param_1)

{
  std::vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::operator=
            ((vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)this,
             (vector *)param_1);
  return this;
}

