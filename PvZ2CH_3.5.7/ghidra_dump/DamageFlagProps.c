// Class: DamageFlagProps


/* DamageFlagProps::ApplyDamageFlagsTo(DamageInfo&) */

void __thiscall DamageFlagProps::ApplyDamageFlagsTo(DamageFlagProps *this,DamageInfo *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)this;
  uVar6 = *puVar1;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uVar2 = FUN_04920cc8(uVar6,puVar1[1]);
  do {
    uVar4 = uVar5;
    if (uVar2 <= uVar5) {
      return;
    }
    while( true ) {
      uVar5 = uVar4 + 1;
      plVar3 = (long *)FUN_04920cd4(uVar6,uVar4);
      if (*plVar3 == 0) break;
      uVar6 = ConvertIndexTo<DamageTypeFlags>(*plVar3);
      operator|=(param_1 + 0x10,uVar6);
      uVar6 = **(undefined8 **)this;
      uVar2 = FUN_04920cc8(uVar6,(*(undefined8 **)this)[1]);
      uVar4 = uVar5;
      if (uVar2 <= uVar5) {
        return;
      }
    }
  } while( true );
}

