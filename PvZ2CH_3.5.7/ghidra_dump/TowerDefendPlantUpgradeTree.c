// Class: TowerDefendPlantUpgradeTree


/* TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree() */

void __thiscall
TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree(TowerDefendPlantUpgradeTree *this)

{
  std::_Destroy<CornucopiaRankData*>
            (*(CornucopiaRankData **)this,*(CornucopiaRankData **)(this + 8));
  std::_Vector_base<TowerDefendPlantUpgradeInfo,std::allocator<TowerDefendPlantUpgradeInfo>>::
  ~_Vector_base((_Vector_base<TowerDefendPlantUpgradeInfo,std::allocator<TowerDefendPlantUpgradeInfo>>
                 *)this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x035d8d04 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree(TowerDefendPlantUpgradeTree const&) */

void __thiscall
TowerDefendPlantUpgradeTree::TowerDefendPlantUpgradeTree
          (TowerDefendPlantUpgradeTree *this,TowerDefendPlantUpgradeTree *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  TowerDefendPlantUpgradeInfo *pTVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_035cc1a0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<TowerDefendPlantUpgradeInfo,std::allocator<TowerDefendPlantUpgradeInfo>>::
  _Vector_base((ulong)this,paVar2);
  FUN_035d3290(*(undefined8 *)param_1);
  uVar3 = FUN_035d32e0(*(undefined8 *)(param_1 + 8));
  pTVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<TowerDefendPlantUpgradeInfo_const*,std::vector<TowerDefendPlantUpgradeInfo,std::allocator<TowerDefendPlantUpgradeInfo>>>,TowerDefendPlantUpgradeInfo*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(TowerDefendPlantUpgradeInfo **)(this + 8) = pTVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

