// Class: AwardDiffSetHelpers


/* AwardDiffSetHelpers::CreateDiff(AwardEntry const&, int) */

undefined8 __thiscall
AwardDiffSetHelpers::CreateDiff(AwardDiffSetHelpers *this,AwardEntry *param_1,int param_2)

{
  undefined8 in_x8;
  
  AwardDiffEntry::AwardDiffEntry();
  return in_x8;
}


/* AwardDiffSetHelpers::GenerateDiff(AwardEntry const&) */

void AwardDiffSetHelpers::GenerateDiff(AwardEntry *param_1)

{
  int iVar1;
  PlayerInfo *this;
  ulong uVar2;
  int in_w2;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = *(int *)param_1;
  if (iVar1 == 0xb) {
    uVar2 = PlayerInfo::GetNumCoins(this,false);
    CreateDiff((AwardDiffSetHelpers *)param_1,(AwardEntry *)(uVar2 & 0xffffffff),in_w2);
    return;
  }
  if (iVar1 != 0xc) {
    if (iVar1 != 4) {
      CreateDiff((AwardDiffSetHelpers *)param_1,(AwardEntry *)0x0,in_w2);
      return;
    }
    uVar2 = PlayerInfo::GetPowerupUsesLeft(this,(string *)(param_1 + 8));
    CreateDiff((AwardDiffSetHelpers *)param_1,(AwardEntry *)(uVar2 & 0xffffffff),in_w2);
    return;
  }
  uVar2 = PlayerInfo::GetNumGems(this,false);
  CreateDiff((AwardDiffSetHelpers *)param_1,(AwardEntry *)(uVar2 & 0xffffffff),in_w2);
  return;
}

