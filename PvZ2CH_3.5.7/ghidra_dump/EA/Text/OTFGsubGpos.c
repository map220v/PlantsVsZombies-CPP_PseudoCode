// Class: EA::Text::OTFGsubGpos


/* EA::Text::OTFGsubGpos::Empty() const */

bool __thiscall EA::Text::OTFGsubGpos::Empty(OTFGsubGpos *this)

{
  return *(short *)(this + 0x22) == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTFGsubGpos::BuildFeatureLookup(EA::Text::OTFTagStruct const&, EA::Text::OTFTagStruct
   const&, eastl::fixed_vector<EA::Text::FeatureLookup, 10ul, true, eastl::allocator>&) const */

void __thiscall
EA::Text::OTFGsubGpos::BuildFeatureLookup
          (OTFGsubGpos *this,OTFTagStruct *param_1,OTFTagStruct *param_2,fixed_vector *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = OTFScriptList::GetLangSys((OTFScriptList *)(this + 0x10),param_1,param_2,false);
  uVar7 = *(undefined8 *)param_3;
  lVar4 = FUN_0537ac78(uVar7,*(undefined8 *)(param_3 + 8));
  if (lVar4 == 0) {
LAB_0537d6bc:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar9 = 0;
  do {
    uVar8 = 0;
    puVar5 = (undefined4 *)FUN_0537ac98(uVar7,lVar9);
    if (*(short *)(lVar3 + 4) != 0) {
      do {
        lVar6 = (ulong)*(ushort *)(*(long *)(lVar3 + 8) + uVar8 * 2) * 0x18;
        lVar1 = *(long *)(this + 0x28) + lVar6;
        OTFTagStruct::OTFTagStruct
                  ((OTFTagStruct *)&local_10,*(uint *)(*(long *)(this + 0x28) + lVar6));
        cVar2 = Text::operator==(local_10 & 0xffffffff,*puVar5);
        if (cVar2 != '\0') {
          FUN_0537acdc(*(undefined8 *)(puVar5 + 2),puVar5 + 4);
          if (*(short *)(lVar1 + 8) != 0) {
            uVar8 = 0;
            do {
              lVar6 = uVar8 * 2;
              uVar8 = uVar8 + 1;
              local_10 = *(long *)(this + 0x38) +
                         (ulong)*(ushort *)(*(long *)(lVar1 + 0x10) + lVar6) * 0x18;
              eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::push_back
                        ((fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *)
                         (puVar5 + 2),(OTFLookup **)&local_10);
            } while (uVar8 < *(ushort *)(lVar1 + 8));
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar3 + 4));
    }
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar4) goto LAB_0537d6bc;
    uVar7 = *(undefined8 *)param_3;
  } while( true );
}

