// Class: TowerDefendRoadInfo


/* TowerDefendRoadInfo::TEMPNAMEPLACEHOLDERVALUE(TowerDefendRoadInfo&&) */

TowerDefendRoadInfo * __thiscall
TowerDefendRoadInfo::operator=(TowerDefendRoadInfo *this,TowerDefendRoadInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474278(this + 8,param_1 + 8);
  return this;
}

