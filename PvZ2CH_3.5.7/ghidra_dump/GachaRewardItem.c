// Class: GachaRewardItem


/* GachaRewardItem::TEMPNAMEPLACEHOLDERVALUE(GachaRewardItem const&) const */

bool __thiscall GachaRewardItem::operator==(GachaRewardItem *this,GachaRewardItem *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)param_1 == *(int *)this) && (*(int *)(param_1 + 4) == *(int *)(this + 4))) {
    bVar1 = *(int *)(param_1 + 8) == *(int *)(this + 8);
  }
  return bVar1;
}

