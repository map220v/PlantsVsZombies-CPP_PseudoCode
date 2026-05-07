// Class: EA::Text::OTF


/* EA::Text::OTF::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::OTF::SetAllocator(OTF *this,ICoreAllocator *param_1)

{
  *(ICoreAllocator **)(this + 0x200) = param_1;
  return;
}


/* EA::Text::OTF::OTF(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::OTF::OTF(OTF *this,ICoreAllocator *param_1)

{
  OTF *pOVar1;
  OTF *this_00;
  
  this_00 = this + 0xc;
  do {
    pOVar1 = this_00 + 0x10;
    OTFTableDirectoryEntry::OTFTableDirectoryEntry((OTFTableDirectoryEntry *)this_00);
    this_00 = pOVar1;
  } while (pOVar1 != this + 0x5c);
  this[0x1a8] = (OTF)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  Allocator::StackAllocator::StackAllocator
            ((StackAllocator *)(this + 0x1b8),(void *)0x0,0xffffffffffffffff,
             (_func_void_ptr_ulong_ulong_ptr_void_ptr *)0x0,(_func_void_void_ptr_void_ptr *)0x0,
             (void *)0x0);
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)(this + 0x200) = param_1;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  return;
}


/* EA::Text::OTF::Unload() */

undefined8 __thiscall EA::Text::OTF::Unload(OTF *this)

{
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x18))();
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  Allocator::StackAllocator::~StackAllocator((StackAllocator *)(this + 0x1b8));
  return 1;
}


/* EA::Text::OTF::~OTF() */

void __thiscall EA::Text::OTF::~OTF(OTF *this)

{
  Unload(this);
  Allocator::StackAllocator::~StackAllocator((StackAllocator *)(this + 0x1b8));
  return;
}


/* EA::Text::OTF::IsLoaded() const */

OTF __thiscall EA::Text::OTF::IsLoaded(OTF *this)

{
  return this[0x1a8];
}


/* EA::Text::OTF::ReadUint16(unsigned short&) */

void __thiscall EA::Text::OTF::ReadUint16(OTF *this,ushort *param_1)

{
  IO::ReadUint16(*(undefined8 *)(this + 0x1b0),param_1,0);
  return;
}


/* EA::Text::OTF::ReadUint16(unsigned short*, unsigned long) */

void __thiscall EA::Text::OTF::ReadUint16(OTF *this,ushort *param_1,ulong param_2)

{
  IO::ReadUint16(*(undefined8 *)(this + 0x1b0),param_1,param_2,0);
  return;
}


/* EA::Text::OTF::ReadUint32(unsigned int&) */

void __thiscall EA::Text::OTF::ReadUint32(OTF *this,uint *param_1)

{
  IO::ReadUint32(*(undefined8 *)(this + 0x1b0),param_1,0);
  return;
}


/* EA::Text::OTF::ReadUint32(unsigned int*, unsigned long) */

void __thiscall EA::Text::OTF::ReadUint32(OTF *this,uint *param_1,ulong param_2)

{
  IO::ReadUint32(*(undefined8 *)(this + 0x1b0),param_1,param_2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTF::GetTableDirectoryEntry(char const*) */

void __thiscall EA::Text::OTF::GetTableDirectoryEntry(OTF *this,char *param_1)

{
  char cVar1;
  OTF *pOVar2;
  long lVar3;
  undefined4 local_10 [2];
  long local_8;
  
  lVar3 = 0;
  local_8 = ___stack_chk_guard;
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,param_1);
  do {
    cVar1 = Text::operator==(*(undefined4 *)(this + lVar3 * 0x10 + 0xc),local_10[0]);
    if (cVar1 != '\0') {
      pOVar2 = this + lVar3 * 0x10 + 0xc;
      goto LAB_0537b06c;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  pOVar2 = (OTF *)0x0;
LAB_0537b06c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pOVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTF::ReadTableDirectory() */

void __thiscall EA::Text::OTF::ReadTableDirectory(OTF *this)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),0,0);
  lVar4 = (**(code **)(**(long **)(this + 0x1b0) + 0x68))(*(long **)(this + 0x1b0),this,0xc);
  if (lVar4 == 0xc) {
    iVar3 = FUN_0537ac40(*(undefined4 *)this);
    *(int *)this = iVar3;
    if (iVar3 == 0x10000) {
      sVar2 = FUN_0537ac30(*(undefined2 *)(this + 4));
      *(short *)(this + 4) = sVar2;
      *(undefined8 *)(this + 0xc) = 0;
      *(undefined8 *)(this + 0x14) = 0;
      *(undefined8 *)(this + 0x1c) = 0;
      *(undefined8 *)(this + 0x24) = 0;
      *(undefined8 *)(this + 0x2c) = 0;
      *(undefined8 *)(this + 0x34) = 0;
      *(undefined8 *)(this + 0x3c) = 0;
      *(undefined8 *)(this + 0x44) = 0;
      *(undefined8 *)(this + 0x4c) = 0;
      *(undefined8 *)(this + 0x54) = 0;
      if (sVar2 != 0) {
        uVar6 = 0;
LAB_0537b180:
        do {
          lVar4 = 0;
          OTFTableDirectoryEntry::OTFTableDirectoryEntry((OTFTableDirectoryEntry *)&local_18);
          (**(code **)(**(long **)(this + 0x1b0) + 0x68))
                    (*(long **)(this + 0x1b0),(OTFTableDirectoryEntry *)&local_18,0x10);
          local_18 = FUN_0537ac40(local_18);
          do {
            cVar1 = Text::operator==(local_18,(&kOTFTableTypeNames)[lVar4]);
            if (cVar1 != '\0') {
              uVar6 = uVar6 + 1;
              uStack_14 = FUN_0537ac40(uStack_14);
              local_10 = FUN_0537ac40(local_10);
              local_c = FUN_0537ac40(local_c);
              *(ulong *)(this + lVar4 * 0x10 + 0xc) = CONCAT44(uStack_14,local_18);
              *(ulong *)(this + lVar4 * 0x10 + 0x14) = CONCAT44(local_c,local_10);
              if (*(ushort *)(this + 4) <= uVar6) goto LAB_0537b1e8;
              goto LAB_0537b180;
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 != 5);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)(this + 4));
      }
LAB_0537b1e8:
      uVar5 = 1;
      goto LAB_0537b10c;
    }
  }
  uVar5 = 0;
LAB_0537b10c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* EA::Text::OTF::ReadHead() */

bool __thiscall EA::Text::OTF::ReadHead(OTF *this)

{
  int iVar1;
  
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))
            (*(long **)(this + 0x1b0),*(undefined4 *)(this + 0x14),0);
  (**(code **)(**(long **)(this + 0x1b0) + 0x68))(*(long **)(this + 0x1b0),this + 0x60,0x40);
  iVar1 = FUN_0537ac40(*(undefined4 *)(this + 0x6c));
  *(int *)(this + 0x6c) = iVar1;
  return iVar1 == 0x5f0f3cf5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTF::IsScriptSupported(char const*, char const*) const */

void __thiscall EA::Text::OTF::IsScriptSupported(OTF *this,char *param_1,char *param_2)

{
  OTF OVar1;
  char cVar2;
  long lVar3;
  undefined4 local_18 [2];
  OTFTagStruct aOStack_10 [8];
  long local_8;
  
  OVar1 = this[0x1a8];
  local_8 = ___stack_chk_guard;
  if (OVar1 != (OTF)0x0) {
    OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_18,param_1);
    cVar2 = Text::operator==(local_18[0],0x61726162);
    if ((cVar2 != '\0') || (cVar2 = Text::operator==(local_18[0],0x64657661), cVar2 != '\0')) {
      if (param_2 == (char *)0x0) {
        OTFTagStruct::OTFTagStruct(aOStack_10,0);
      }
      else {
        OTFTagStruct::OTFTagStruct(aOStack_10,param_2);
      }
      lVar3 = OTFScriptList::GetLangSys
                        ((OTFScriptList *)(this + 0x138),(OTFTagStruct *)local_18,aOStack_10,true);
      OVar1 = (OTF)(lVar3 != 0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(OVar1);
  }
  return;
}


/* EA::Text::OTF::ReadClassDef(EA::Text::OTFClassDef&, unsigned int) */

undefined8 __thiscall EA::Text::OTF::ReadClassDef(OTF *this,OTFClassDef *param_1,uint param_2)

{
  uint uVar1;
  OTFRangeRecord *pOVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),param_2,0);
  ReadUint16(this,(ushort *)param_1);
  if (*(short *)param_1 == 1) {
    ReadUint16(this,(ushort *)(param_1 + 8));
    ReadUint16(this,(ushort *)(param_1 + 10));
    puVar3 = create_array<unsigned_short>
                       ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_1 + 10));
    *(ushort **)(param_1 + 0x10) = puVar3;
    ReadUint16(this,puVar3,(ulong)*(ushort *)(param_1 + 10));
  }
  else if (*(short *)param_1 == 2) {
    ReadUint16(this,(ushort *)(param_1 + 8));
    pOVar2 = create_array<EA::Text::OTFRangeRecord>
                       ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_1 + 8));
    *(OTFRangeRecord **)(param_1 + 0x10) = pOVar2;
    if (*(short *)(param_1 + 8) != 0) {
      uVar5 = 0;
      while( true ) {
        uVar1 = (int)uVar5 + 1;
        lVar4 = uVar5 * 6;
        ReadUint16(this,(ushort *)(pOVar2 + lVar4));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 0x10) + lVar4 + 2));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 0x10) + lVar4 + 4));
        if (*(ushort *)(param_1 + 8) <= uVar1) break;
        pOVar2 = *(OTFRangeRecord **)(param_1 + 0x10);
        uVar5 = (ulong)uVar1;
      }
      return 1;
    }
  }
  return 1;
}


/* EA::Text::OTF::ReadCoverage(EA::Text::OTFCoverage&, unsigned int) */

undefined8 __thiscall EA::Text::OTF::ReadCoverage(OTF *this,OTFCoverage *param_1,uint param_2)

{
  uint uVar1;
  OTFRangeRecord *pOVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),param_2,0);
  ReadUint16(this,(ushort *)param_1);
  ReadUint16(this,(ushort *)(param_1 + 2));
  if (*(short *)param_1 == 1) {
    puVar3 = create_array<unsigned_short>
                       ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_1 + 2));
    *(ushort **)(param_1 + 8) = puVar3;
    ReadUint16(this,puVar3,(ulong)*(ushort *)(param_1 + 2));
  }
  else if (*(short *)param_1 == 2) {
    pOVar2 = create_array<EA::Text::OTFRangeRecord>
                       ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_1 + 2));
    *(OTFRangeRecord **)(param_1 + 8) = pOVar2;
    if (*(short *)(param_1 + 2) != 0) {
      uVar5 = 0;
      while( true ) {
        uVar1 = (int)uVar5 + 1;
        lVar4 = uVar5 * 6;
        ReadUint16(this,(ushort *)(pOVar2 + lVar4));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar4 + 2));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar4 + 4));
        if (*(ushort *)(param_1 + 2) <= uVar1) break;
        pOVar2 = *(OTFRangeRecord **)(param_1 + 8);
        uVar5 = (ulong)uVar1;
      }
      return 1;
    }
  }
  return 1;
}


/* EA::Text::OTF::ReadScriptList(EA::Text::OTFScriptList&, unsigned int) */

undefined8 __thiscall EA::Text::OTF::ReadScriptList(OTF *this,OTFScriptList *param_1,uint param_2)

{
  uint uVar1;
  StackAllocator *pSVar2;
  OTFScript *pOVar3;
  OTFLookup *pOVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  pSVar2 = (StackAllocator *)(this + 0x1b8);
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),param_2,0);
  ReadUint16(this,(ushort *)(param_1 + 2));
  pOVar3 = create_array<EA::Text::OTFScript>(pSVar2,(ulong)*(ushort *)(param_1 + 2));
  *(OTFScript **)(param_1 + 8) = pOVar3;
  if (*(short *)(param_1 + 2) != 0) {
    uVar10 = 0;
    while( true ) {
      uVar1 = (int)uVar10 + 1;
      ReadUint32(this,(uint *)(pOVar3 + uVar10 * 0x28));
      ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + uVar10 * 0x28 + 4));
      if (*(ushort *)(param_1 + 2) <= uVar1) break;
      pOVar3 = *(OTFScript **)(param_1 + 8);
      uVar10 = (ulong)uVar1;
    }
    if (*(ushort *)(param_1 + 2) != 0) {
      uVar10 = 0;
      do {
        lVar9 = uVar10 * 0x28;
        (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                  (*(long **)(this + 0x1b0),
                   param_2 + *(ushort *)(*(long *)(param_1 + 8) + lVar9 + 4),0);
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar9 + 6));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar9 + 0x18));
        lVar8 = *(long *)(param_1 + 8);
        pOVar4 = create_array<EA::Text::OTFLookup>(pSVar2,(ulong)*(ushort *)(lVar8 + lVar9 + 0x18));
        lVar7 = *(long *)(param_1 + 8);
        *(OTFLookup **)(lVar8 + lVar9 + 0x20) = pOVar4;
        lVar7 = lVar7 + lVar9;
        if (*(short *)(lVar7 + 0x18) != 0) {
          uVar11 = 0;
          do {
            uVar1 = (int)uVar11 + 1;
            ReadUint32(this,(uint *)(*(long *)(lVar7 + 0x20) + uVar11 * 0x18));
            ReadUint16(this,(ushort *)
                            (*(long *)(*(long *)(param_1 + 8) + lVar9 + 0x20) + uVar11 * 0x18 + 4));
            lVar7 = *(long *)(param_1 + 8) + lVar9;
            uVar11 = (ulong)uVar1;
          } while (uVar1 < *(ushort *)(lVar7 + 0x18));
          if (*(ushort *)(lVar7 + 0x18) != 0) {
            uVar11 = 0;
            do {
              lVar8 = uVar11 * 0x18;
              uVar1 = (int)uVar11 + 1;
              uVar11 = (ulong)uVar1;
              (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                        (*(long **)(this + 0x1b0),
                         (uint)*(ushort *)(*(long *)(lVar7 + 0x20) + lVar8 + 4) +
                         (uint)*(ushort *)(lVar7 + 4) + param_2,0);
              ReadUint16(this,(ushort *)
                              (*(long *)(*(long *)(param_1 + 8) + lVar9 + 0x20) + lVar8 + 8));
              ReadUint16(this,(ushort *)
                              (*(long *)(*(long *)(param_1 + 8) + lVar9 + 0x20) + lVar8 + 10));
              ReadUint16(this,(ushort *)
                              (*(long *)(*(long *)(param_1 + 8) + lVar9 + 0x20) + lVar8 + 0xc));
              lVar7 = *(long *)(*(long *)(param_1 + 8) + lVar9 + 0x20) + lVar8;
              puVar5 = create_array<unsigned_short>(pSVar2,(ulong)*(ushort *)(lVar7 + 0xc));
              lVar6 = *(long *)(param_1 + 8);
              *(ushort **)(lVar7 + 0x10) = puVar5;
              lVar8 = *(long *)(lVar6 + lVar9 + 0x20) + lVar8;
              ReadUint16(this,*(ushort **)(lVar8 + 0x10),(ulong)*(ushort *)(lVar8 + 0xc));
              lVar7 = *(long *)(param_1 + 8) + lVar9;
            } while (uVar1 < *(ushort *)(lVar7 + 0x18));
          }
        }
        if (*(ushort *)(lVar7 + 6) == 0) {
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined8 *)(lVar7 + 0x10) = 0;
        }
        else {
          (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                    (*(long **)(this + 0x1b0),
                     (uint)*(ushort *)(lVar7 + 6) + (uint)*(ushort *)(lVar7 + 4) + param_2,0);
          ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar9 + 8));
          ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar9 + 10));
          ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar9 + 0xc));
          lVar8 = *(long *)(param_1 + 8);
          puVar5 = create_array<unsigned_short>(pSVar2,(ulong)*(ushort *)(lVar8 + lVar9 + 0xc));
          lVar7 = *(long *)(param_1 + 8);
          *(ushort **)(lVar8 + lVar9 + 0x10) = puVar5;
          ReadUint16(this,*(ushort **)(lVar7 + lVar9 + 0x10),(ulong)*(ushort *)(lVar7 + lVar9 + 0xc)
                    );
        }
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
      } while (uVar1 < *(ushort *)(param_1 + 2));
    }
  }
  return 1;
}


/* EA::Text::OTF::ReadFeatureList(EA::Text::OTFFeatureList&, unsigned int) */

undefined8 __thiscall EA::Text::OTF::ReadFeatureList(OTF *this,OTFFeatureList *param_1,uint param_2)

{
  uint uVar1;
  OTFLookup *pOVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),param_2,0);
  ReadUint16(this,(ushort *)(param_1 + 2));
  pOVar2 = create_array<EA::Text::OTFLookup>
                     ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_1 + 2));
  *(OTFLookup **)(param_1 + 8) = pOVar2;
  if (*(short *)(param_1 + 2) != 0) {
    uVar7 = 0;
    while( true ) {
      uVar1 = (int)uVar7 + 1;
      ReadUint32(this,(uint *)(pOVar2 + uVar7 * 0x18));
      ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + uVar7 * 0x18 + 4));
      if (*(ushort *)(param_1 + 2) <= uVar1) break;
      pOVar2 = *(OTFLookup **)(param_1 + 8);
      uVar7 = (ulong)uVar1;
    }
    if (*(ushort *)(param_1 + 2) != 0) {
      uVar7 = 0;
      do {
        lVar5 = uVar7 * 0x18;
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
        (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                  (*(long **)(this + 0x1b0),
                   param_2 + *(ushort *)(*(long *)(param_1 + 8) + lVar5 + 4),0);
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar5 + 6));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar5 + 8));
        lVar6 = *(long *)(param_1 + 8);
        puVar3 = create_array<unsigned_short>
                           ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(lVar6 + lVar5 + 8));
        lVar4 = *(long *)(param_1 + 8);
        *(ushort **)(lVar6 + lVar5 + 0x10) = puVar3;
        ReadUint16(this,*(ushort **)(lVar4 + lVar5 + 0x10),(ulong)*(ushort *)(lVar4 + lVar5 + 8));
      } while (uVar1 < *(ushort *)(param_1 + 2));
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTF::ReadGsubArrayEntry(unsigned int, unsigned int, unsigned int,
   EA::Text::OTFLookupSubTableGsub&) */

void __thiscall
EA::Text::OTF::ReadGsubArrayEntry
          (OTF *this,uint param_1,uint param_2,uint param_3,OTFLookupSubTableGsub *param_4)

{
  uint uVar1;
  StackAllocator *pSVar2;
  ushort uVar3;
  OTFClassRule *pOVar4;
  OTFChainClassSet *pOVar5;
  OTFChainClassRule *pOVar6;
  OTFLookupRecord *pOVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
    if (param_3 == 1) {
      IO::ReadInt16(*(undefined8 *)(this + 0x1b0),param_4 + 0x18,0);
    }
    else {
      ReadUint16(this,(ushort *)(param_4 + 0x18));
      puVar8 = create_array<unsigned_short>
                         ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_4 + 0x18));
      *(ushort **)(param_4 + 0x20) = puVar8;
      ReadUint16(this,puVar8,(ulong)*(ushort *)(param_4 + 0x18));
    }
    break;
  case 2:
    ReadUint16(this,(ushort *)(param_4 + 0x18));
    pOVar5 = create_array<EA::Text::OTFChainClassSet>
                       ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(param_4 + 0x18));
    *(OTFChainClassSet **)(param_4 + 0x20) = pOVar5;
    if (*(short *)(param_4 + 0x18) != 0) {
      uVar10 = 0;
      while( true ) {
        lVar13 = uVar10 * 0x10;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
        ReadUint16(this,(ushort *)(pOVar5 + lVar13));
        if (*(ushort *)(param_4 + 0x18) <= uVar1) break;
        pOVar5 = *(OTFChainClassSet **)(param_4 + 0x20);
      }
      if (*(ushort *)(param_4 + 0x18) != 0) {
        uVar10 = 0;
        do {
          lVar13 = uVar10 * 0x10;
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar1;
          (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                    (*(long **)(this + 0x1b0),
                     param_1 + *(ushort *)(*(long *)(param_4 + 0x20) + lVar13),0);
          ReadUint16(this,(ushort *)(*(long *)(param_4 + 0x20) + lVar13 + 2));
          lVar12 = *(long *)(param_4 + 0x20);
          puVar8 = create_array<unsigned_short>
                             ((StackAllocator *)(this + 0x1b8),
                              (ulong)*(ushort *)(lVar12 + lVar13 + 2));
          *(ushort **)(lVar12 + lVar13 + 8) = puVar8;
          ReadUint16(this,*(ushort **)(*(long *)(param_4 + 0x20) + lVar13 + 8),
                     (ulong)*(ushort *)(*(long *)(param_4 + 0x20) + lVar13 + 2));
        } while (uVar1 < *(ushort *)(param_4 + 0x18));
      }
    }
    break;
  case 3:
    *(undefined2 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 0x20) = 0;
    break;
  case 4:
    pSVar2 = (StackAllocator *)(this + 0x1b8);
    ReadUint16(this,(ushort *)(param_4 + 0x18));
    pOVar5 = create_array<EA::Text::OTFChainClassSet>(pSVar2,(ulong)*(ushort *)(param_4 + 0x18));
    *(OTFChainClassSet **)(param_4 + 0x20) = pOVar5;
    if (*(short *)(param_4 + 0x18) != 0) {
      uVar10 = 0;
      while( true ) {
        lVar13 = uVar10 * 0x10;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
        ReadUint16(this,(ushort *)(pOVar5 + lVar13));
        if (*(ushort *)(param_4 + 0x18) <= uVar1) break;
        pOVar5 = *(OTFChainClassSet **)(param_4 + 0x20);
      }
      if (*(ushort *)(param_4 + 0x18) != 0) {
        lVar13 = *(long *)(param_4 + 0x20);
        uVar10 = 0;
        do {
          lVar12 = uVar10 * 0x10;
          uVar11 = 0;
          (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                    (*(long **)(this + 0x1b0),param_1 + *(ushort *)(lVar13 + lVar12));
          ReadUint16(this,(ushort *)(*(long *)(param_4 + 0x20) + lVar12 + 2));
          lVar13 = *(long *)(param_4 + 0x20);
          pOVar5 = create_array<EA::Text::OTFChainClassSet>
                             (pSVar2,(ulong)*(ushort *)(lVar13 + lVar12 + 2));
          *(OTFChainClassSet **)(lVar13 + lVar12 + 8) = pOVar5;
          lVar13 = *(long *)(param_4 + 0x20);
          puVar8 = (ushort *)(lVar13 + lVar12);
          if (puVar8[1] != 0) {
            do {
              lVar13 = uVar11 * 0x10;
              uVar1 = (int)uVar11 + 1;
              uVar11 = (ulong)uVar1;
              ReadUint16(this,(ushort *)(*(long *)(puVar8 + 4) + lVar13));
              lVar13 = *(long *)(param_4 + 0x20);
              puVar8 = (ushort *)(lVar13 + lVar12);
            } while (uVar1 < puVar8[1]);
            if (puVar8[1] != 0) {
              uVar11 = 0;
              do {
                lVar14 = uVar11 * 0x10;
                uVar1 = (int)uVar11 + 1;
                uVar11 = (ulong)uVar1;
                (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                          (*(long **)(this + 0x1b0),
                           (uint)*(ushort *)(*(long *)(puVar8 + 4) + lVar14) + (uint)*puVar8 +
                           param_1,0);
                ReadUint16(this,(ushort *)
                                (*(long *)(*(long *)(param_4 + 0x20) + lVar12 + 8) + lVar14 + 2));
                ReadUint16(this,(ushort *)
                                (*(long *)(*(long *)(param_4 + 0x20) + lVar12 + 8) + lVar14 + 4));
                lVar13 = *(long *)(*(long *)(param_4 + 0x20) + lVar12 + 8) + lVar14;
                uVar9 = (ulong)(*(ushort *)(lVar13 + 4) - 1);
                puVar8 = create_array<unsigned_short>(pSVar2,uVar9);
                *(ushort **)(lVar13 + 8) = puVar8;
                ReadUint16(this,*(ushort **)
                                 (*(long *)(*(long *)(param_4 + 0x20) + lVar12 + 8) + lVar14 + 8),
                           uVar9);
                lVar13 = *(long *)(param_4 + 0x20);
                puVar8 = (ushort *)(lVar13 + lVar12);
              } while (uVar1 < puVar8[1]);
            }
          }
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar1;
        } while (uVar1 < *(ushort *)(param_4 + 0x18));
      }
    }
    break;
  case 5:
    if (param_3 != 1) {
      if (param_3 == 2) {
        pSVar2 = (StackAllocator *)(this + 0x1b8);
        ReadUint16(this,&local_a);
        ReadUint16(this,(ushort *)(param_4 + 0x30));
        pOVar5 = create_array<EA::Text::OTFChainClassSet>(pSVar2,(ulong)*(ushort *)(param_4 + 0x30))
        ;
        *(OTFChainClassSet **)(param_4 + 0x38) = pOVar5;
        if (*(short *)(param_4 + 0x30) != 0) {
          uVar10 = 0;
          while( true ) {
            lVar13 = uVar10 * 0x10;
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar1;
            ReadUint16(this,(ushort *)(pOVar5 + lVar13));
            if (*(ushort *)(param_4 + 0x30) <= uVar1) break;
            pOVar5 = *(OTFChainClassSet **)(param_4 + 0x38);
          }
          if (*(ushort *)(param_4 + 0x30) != 0) {
            uVar10 = 0;
            do {
              lVar12 = uVar10 * 0x10;
              lVar13 = *(long *)(param_4 + 0x38) + lVar12;
              uVar3 = *(ushort *)(*(long *)(param_4 + 0x38) + lVar12);
              if (uVar3 == 0) {
                *(ushort *)(lVar13 + 2) = uVar3;
                *(undefined8 *)(lVar13 + 8) = 0;
              }
              else {
                uVar11 = 0;
                (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                          (*(long **)(this + 0x1b0),param_1 + uVar3);
                ReadUint16(this,(ushort *)(*(long *)(param_4 + 0x38) + lVar12 + 2));
                lVar13 = *(long *)(param_4 + 0x38);
                pOVar4 = create_array<EA::Text::OTFClassRule>
                                   (pSVar2,(ulong)*(ushort *)(lVar13 + lVar12 + 2));
                *(OTFClassRule **)(lVar13 + lVar12 + 8) = pOVar4;
                puVar8 = (ushort *)(*(long *)(param_4 + 0x38) + lVar12);
                if (puVar8[1] != 0) {
                  do {
                    lVar13 = uVar11 * 0x20;
                    uVar1 = (int)uVar11 + 1;
                    uVar11 = (ulong)uVar1;
                    ReadUint16(this,(ushort *)(*(long *)(puVar8 + 4) + lVar13));
                    puVar8 = (ushort *)(*(long *)(param_4 + 0x38) + lVar12);
                  } while (uVar1 < puVar8[1]);
                  if (puVar8[1] != 0) {
                    uVar11 = 0;
                    do {
                      lVar14 = uVar11 * 0x20;
                      uVar1 = (int)uVar11 + 1;
                      uVar11 = (ulong)uVar1;
                      (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                                (*(long **)(this + 0x1b0),
                                 (uint)*(ushort *)(*(long *)(puVar8 + 4) + lVar14) + (uint)*puVar8 +
                                 param_1,0);
                      ReadUint16(this,(ushort *)
                                      (*(long *)(*(long *)(param_4 + 0x38) + lVar12 + 8) + lVar14 +
                                      2));
                      lVar13 = *(long *)(*(long *)(param_4 + 0x38) + lVar12 + 8) + lVar14;
                      puVar8 = create_array<unsigned_short>
                                         (pSVar2,(long)(int)(*(ushort *)(lVar13 + 2) - 1));
                      *(ushort **)(lVar13 + 8) = puVar8;
                      ReadUint16(this,(ushort *)
                                      (*(long *)(*(long *)(param_4 + 0x38) + lVar12 + 8) + lVar14 +
                                      0x10));
                      lVar13 = *(long *)(*(long *)(param_4 + 0x38) + lVar12 + 8) + lVar14;
                      pOVar7 = create_array<EA::Text::OTFLookupRecord>
                                         (pSVar2,(ulong)*(ushort *)(lVar13 + 0x10));
                      *(OTFLookupRecord **)(lVar13 + 0x18) = pOVar7;
                      lVar13 = *(long *)(*(long *)(param_4 + 0x38) + lVar12 + 8) + lVar14;
                      ReadUint16(this,*(ushort **)(lVar13 + 8),
                                 (long)(int)(*(ushort *)(lVar13 + 2) - 1));
                      lVar14 = *(long *)(*(long *)(param_4 + 0x38) + lVar12 + 8) + lVar14;
                      ReadUint16(this,*(ushort **)(lVar14 + 0x18),
                                 (ulong)*(ushort *)(lVar14 + 0x10) << 1);
                      puVar8 = (ushort *)(*(long *)(param_4 + 0x38) + lVar12);
                    } while (uVar1 < puVar8[1]);
                  }
                }
              }
              uVar1 = (int)uVar10 + 1;
              uVar10 = (ulong)uVar1;
            } while (uVar1 < *(ushort *)(param_4 + 0x30));
          }
        }
        ReadClassDef(this,(OTFClassDef *)(param_4 + 0x18),param_1 + local_a);
      }
      else {
        *(undefined8 *)(param_4 + 0x18) = 0;
        *(undefined8 *)(param_4 + 0x20) = 0;
        *(undefined8 *)(param_4 + 0x28) = 0;
        *(undefined8 *)(param_4 + 0x30) = 0;
      }
      break;
    }
  case 7:
switchD_0537c140_caseD_7:
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 0x20) = 0;
    break;
  case 6:
    if (param_3 != 1) {
      if (param_3 == 2) {
        pSVar2 = (StackAllocator *)(this + 0x1b8);
        ReadUint16(this,&local_e);
        ReadUint16(this,&local_c);
        ReadUint16(this,&local_a);
        ReadUint16(this,(ushort *)(param_4 + 0x60));
        pOVar5 = create_array<EA::Text::OTFChainClassSet>(pSVar2,(ulong)*(ushort *)(param_4 + 0x60))
        ;
        *(OTFChainClassSet **)(param_4 + 0x68) = pOVar5;
        if (*(short *)(param_4 + 0x60) != 0) {
          uVar10 = 0;
          while( true ) {
            lVar13 = uVar10 * 0x10;
            uVar1 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar1;
            ReadUint16(this,(ushort *)(pOVar5 + lVar13));
            if (*(ushort *)(param_4 + 0x60) <= uVar1) break;
            pOVar5 = *(OTFChainClassSet **)(param_4 + 0x68);
          }
          if (*(ushort *)(param_4 + 0x60) != 0) {
            uVar10 = 0;
            do {
              lVar12 = uVar10 * 0x10;
              lVar13 = *(long *)(param_4 + 0x68) + lVar12;
              uVar3 = *(ushort *)(*(long *)(param_4 + 0x68) + lVar12);
              if (uVar3 == 0) {
                *(ushort *)(lVar13 + 2) = uVar3;
                *(undefined8 *)(lVar13 + 8) = 0;
              }
              else {
                uVar11 = 0;
                (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                          (*(long **)(this + 0x1b0),param_1 + uVar3);
                ReadUint16(this,(ushort *)(*(long *)(param_4 + 0x68) + lVar12 + 2));
                lVar13 = *(long *)(param_4 + 0x68);
                pOVar6 = create_array<EA::Text::OTFChainClassRule>
                                   (pSVar2,(ulong)*(ushort *)(lVar13 + lVar12 + 2));
                *(OTFChainClassRule **)(lVar13 + lVar12 + 8) = pOVar6;
                puVar8 = (ushort *)(*(long *)(param_4 + 0x68) + lVar12);
                if (puVar8[1] != 0) {
                  do {
                    lVar13 = uVar11 * 0x40;
                    uVar1 = (int)uVar11 + 1;
                    uVar11 = (ulong)uVar1;
                    ReadUint16(this,(ushort *)(*(long *)(puVar8 + 4) + lVar13));
                    puVar8 = (ushort *)(*(long *)(param_4 + 0x68) + lVar12);
                  } while (uVar1 < puVar8[1]);
                  if (puVar8[1] != 0) {
                    uVar11 = 0;
                    do {
                      lVar13 = uVar11 * 0x40;
                      (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                                (*(long **)(this + 0x1b0),
                                 (uint)*(ushort *)(*(long *)(puVar8 + 4) + lVar13) + (uint)*puVar8 +
                                 param_1,0);
                      ReadUint16(this,(ushort *)
                                      (*(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13 +
                                      2));
                      lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      if (*(ushort *)(lVar14 + 2) == 0) {
                        *(undefined8 *)(lVar14 + 8) = 0;
                      }
                      else {
                        puVar8 = create_array<unsigned_short>(pSVar2,(ulong)*(ushort *)(lVar14 + 2))
                        ;
                        *(ushort **)(lVar14 + 8) = puVar8;
                        lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                        ReadUint16(this,*(ushort **)(lVar14 + 8),(ulong)*(ushort *)(lVar14 + 2));
                        lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      }
                      ReadUint16(this,(ushort *)(lVar14 + 0x10));
                      lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      if (*(ushort *)(lVar14 + 0x10) < 2) {
                        *(undefined8 *)(lVar14 + 0x18) = 0;
                      }
                      else {
                        puVar8 = create_array<unsigned_short>
                                           (pSVar2,(long)(int)(*(ushort *)(lVar14 + 0x10) - 1));
                        *(ushort **)(lVar14 + 0x18) = puVar8;
                        lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                        ReadUint16(this,*(ushort **)(lVar14 + 0x18),
                                   (long)(int)(*(ushort *)(lVar14 + 0x10) - 1));
                        lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      }
                      ReadUint16(this,(ushort *)(lVar14 + 0x20));
                      lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      if (*(ushort *)(lVar14 + 0x20) == 0) {
                        *(undefined8 *)(lVar14 + 0x28) = 0;
                      }
                      else {
                        puVar8 = create_array<unsigned_short>
                                           (pSVar2,(ulong)*(ushort *)(lVar14 + 0x20));
                        *(ushort **)(lVar14 + 0x28) = puVar8;
                        lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                        ReadUint16(this,*(ushort **)(lVar14 + 0x28),
                                   (ulong)*(ushort *)(lVar14 + 0x20));
                        lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      }
                      uVar1 = (int)uVar11 + 1;
                      uVar11 = (ulong)uVar1;
                      ReadUint16(this,(ushort *)(lVar14 + 0x30));
                      lVar14 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      pOVar7 = create_array<EA::Text::OTFLookupRecord>
                                         (pSVar2,(ulong)*(ushort *)(lVar14 + 0x30));
                      *(OTFLookupRecord **)(lVar14 + 0x38) = pOVar7;
                      lVar13 = *(long *)(*(long *)(param_4 + 0x68) + lVar12 + 8) + lVar13;
                      ReadUint16(this,*(ushort **)(lVar13 + 0x38),
                                 (ulong)*(ushort *)(lVar13 + 0x30) << 1);
                      puVar8 = (ushort *)(*(long *)(param_4 + 0x68) + lVar12);
                    } while (uVar1 < puVar8[1]);
                  }
                }
              }
              uVar1 = (int)uVar10 + 1;
              uVar10 = (ulong)uVar1;
            } while (uVar1 < *(ushort *)(param_4 + 0x60));
          }
        }
        if (local_e == 0) {
          *(undefined8 *)(param_4 + 0x28) = 0;
          *(undefined8 *)(param_4 + 0x18) = 0;
          *(undefined8 *)(param_4 + 0x20) = 0;
        }
        else {
          ReadClassDef(this,(OTFClassDef *)(param_4 + 0x18),param_1 + local_e);
        }
        if (local_c == 0) {
          *(undefined8 *)(param_4 + 0x30) = 0;
          *(undefined8 *)(param_4 + 0x38) = 0;
          *(undefined8 *)(param_4 + 0x40) = 0;
        }
        else {
          ReadClassDef(this,(OTFClassDef *)(param_4 + 0x30),param_1 + local_c);
        }
        if (local_a == 0) {
          *(undefined8 *)(param_4 + 0x58) = 0;
          *(undefined8 *)(param_4 + 0x48) = 0;
          *(undefined8 *)(param_4 + 0x50) = 0;
        }
        else {
          ReadClassDef(this,(OTFClassDef *)(param_4 + 0x48),param_1 + local_a);
        }
      }
      else {
        *(undefined8 *)(param_4 + 0x18) = 0;
        *(undefined8 *)(param_4 + 0x20) = 0;
        *(undefined8 *)(param_4 + 0x28) = 0;
        *(undefined8 *)(param_4 + 0x30) = 0;
        *(undefined8 *)(param_4 + 0x38) = 0;
        *(undefined8 *)(param_4 + 0x40) = 0;
        *(undefined8 *)(param_4 + 0x48) = 0;
        *(undefined8 *)(param_4 + 0x50) = 0;
      }
      break;
    }
    goto switchD_0537c140_caseD_7;
  case 8:
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x30) = 0;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* EA::Text::OTF::ReadLookupList(EA::Text::OTFLookupList&, unsigned int, EA::Text::OTFTableType) */

undefined8 __thiscall EA::Text::OTF::ReadLookupList(OTF *this,long param_1,int param_2,int param_4)

{
  StackAllocator *pSVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  OTFLookup *pOVar6;
  ushort *puVar7;
  OTFLookupSubTableGsub *pOVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  pSVar1 = (StackAllocator *)(this + 0x1b8);
  (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),param_2,0);
  ReadUint16(this,(ushort *)(param_1 + 2));
  pOVar6 = create_array<EA::Text::OTFLookup>(pSVar1,(ulong)*(ushort *)(param_1 + 2));
  *(OTFLookup **)(param_1 + 8) = pOVar6;
  if (*(short *)(param_1 + 2) != 0) {
    uVar13 = 0;
    while( true ) {
      uVar12 = (int)uVar13 + 1;
      ReadUint16(this,(ushort *)(pOVar6 + uVar13 * 0x18));
      if (*(ushort *)(param_1 + 2) <= uVar12) break;
      pOVar6 = *(OTFLookup **)(param_1 + 8);
      uVar13 = (ulong)uVar12;
    }
    uVar13 = 0;
    if (*(ushort *)(param_1 + 2) != 0) {
      do {
        lVar11 = uVar13 * 0x18;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar12;
        (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                  (*(long **)(this + 0x1b0),
                   param_2 + (uint)*(ushort *)(*(long *)(param_1 + 8) + lVar11),0);
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar11 + 2));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar11 + 4));
        ReadUint16(this,(ushort *)(*(long *)(param_1 + 8) + lVar11 + 6));
        lVar3 = *(long *)(param_1 + 8) + lVar11;
        puVar7 = create_array<unsigned_short>(pSVar1,(ulong)*(ushort *)(lVar3 + 6));
        lVar9 = *(long *)(param_1 + 8);
        *(ushort **)(lVar3 + 8) = puVar7;
        lVar9 = lVar9 + lVar11;
        ReadUint16(this,*(ushort **)(lVar9 + 8),(ulong)*(ushort *)(lVar9 + 6));
        uVar4 = *(ushort *)(param_1 + 2);
        uVar5 = (uint)uVar4;
      } while (uVar12 < uVar4);
      if (uVar4 != 0) {
        uVar12 = 0;
        do {
          while (param_4 == 4) {
            lVar9 = (ulong)uVar12 * 0x18;
            lVar3 = *(long *)(param_1 + 8) + lVar9;
            pOVar8 = create_array<EA::Text::OTFLookupSubTableGsub>
                               (pSVar1,(ulong)*(ushort *)(lVar3 + 6));
            *(OTFLookupSubTableGsub **)(lVar3 + 0x10) = pOVar8;
            puVar7 = (ushort *)(*(long *)(param_1 + 8) + lVar9);
            uVar13 = 0;
            if (puVar7[3] != 0) {
              do {
                uVar5 = (int)uVar13 + 1;
                uVar2 = param_2 + (uint)*puVar7 +
                        (uint)*(ushort *)(*(long *)(puVar7 + 4) + uVar13 * 2);
                (**(code **)(**(long **)(this + 0x1b0) + 0x58))(*(long **)(this + 0x1b0),uVar2,0);
                lVar11 = uVar13 * 0x70;
                ReadUint16(this,(ushort *)
                                (*(long *)(*(long *)(param_1 + 8) + lVar9 + 0x10) + lVar11));
                ReadUint16(this,(ushort *)
                                (*(long *)(*(long *)(param_1 + 8) + lVar9 + 0x10) + lVar11 + 2));
                lVar3 = *(long *)(param_1 + 8) + lVar9;
                lVar10 = *(long *)(lVar3 + 0x10);
                ReadGsubArrayEntry(this,uVar2,(uint)*(ushort *)(lVar3 + 2),
                                   (uint)*(ushort *)(lVar10 + lVar11),
                                   (OTFLookupSubTableGsub *)(lVar10 + lVar11));
                puVar7 = (ushort *)(*(long *)(param_1 + 8) + lVar9);
                uVar13 = (ulong)uVar5;
              } while (uVar5 < puVar7[3]);
              uVar13 = 0;
              if (puVar7[3] != 0) {
                do {
                  lVar3 = uVar13 * 2;
                  lVar11 = *(long *)(puVar7 + 8) + uVar13 * 0x70;
                  uVar5 = (int)uVar13 + 1;
                  uVar13 = (ulong)uVar5;
                  ReadCoverage(this,(OTFCoverage *)(lVar11 + 8),
                               (uint)*(ushort *)(lVar11 + 2) + (uint)*puVar7 + param_2 +
                               (uint)*(ushort *)(*(long *)(puVar7 + 4) + lVar3));
                  puVar7 = (ushort *)(*(long *)(param_1 + 8) + lVar9);
                } while (uVar5 < puVar7[3]);
              }
            }
            uVar5 = (uint)*(ushort *)(param_1 + 2);
            uVar12 = uVar12 + 1;
            if (uVar5 <= uVar12) {
              return 1;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
      }
    }
  }
  return 1;
}


/* EA::Text::OTF::ReadGsub() */

undefined8 __thiscall EA::Text::OTF::ReadGsub(OTF *this)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x54) != 0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x58))
              (*(long **)(this + 0x1b0),*(int *)(this + 0x54),0);
    (**(code **)(**(long **)(this + 0x1b0) + 0x68))(*(long **)(this + 0x1b0),this + 0x128,0x40);
    if (*(short *)(this + 300) != 0) {
      uVar1 = FUN_0537ac30();
      *(ushort *)(this + 300) = uVar1;
      ReadScriptList(this,(OTFScriptList *)(this + 0x138),*(int *)(this + 0x54) + (uint)uVar1);
    }
    if (*(short *)(this + 0x12e) != 0) {
      uVar1 = FUN_0537ac30();
      *(ushort *)(this + 0x12e) = uVar1;
      ReadFeatureList(this,(OTFFeatureList *)(this + 0x148),*(int *)(this + 0x54) + (uint)uVar1);
    }
    uVar2 = 1;
    if (*(short *)(this + 0x130) != 0) {
      uVar1 = FUN_0537ac30();
      *(ushort *)(this + 0x130) = uVar1;
      ReadLookupList(this,this + 0x158,*(int *)(this + 0x54) + (uint)uVar1,4);
      return 1;
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTF::ReadGdef() */

void __thiscall EA::Text::OTF::ReadGdef(OTF *this)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  OTFChainClassSet *pOVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ushort local_832;
  undefined8 local_830 [261];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x34) != 0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x58))
              (*(long **)(this + 0x1b0),*(int *)(this + 0x34),0);
    (**(code **)(**(long **)(this + 0x1b0) + 0x68))(*(long **)(this + 0x1b0),this + 0xa0,0x88);
    if (*(short *)(this + 0xa4) != 0) {
      uVar3 = FUN_0537ac30();
      *(ushort *)(this + 0xa4) = uVar3;
      ReadClassDef(this,(OTFClassDef *)(this + 0xb0),*(int *)(this + 0x34) + (uint)uVar3);
    }
    if (*(short *)(this + 0xa6) != 0) {
      uVar3 = FUN_0537ac30();
      uVar10 = 0;
      *(ushort *)(this + 0xa6) = uVar3;
      (**(code **)(**(long **)(this + 0x1b0) + 0x58))
                (*(long **)(this + 0x1b0),*(int *)(this + 0x34) + (uint)uVar3,0);
      ReadUint16(this,(ushort *)(this + 200));
      ReadUint16(this,(ushort *)(this + 0xe0));
      local_832 = 0;
      eastl::fixed_vector<unsigned_short,1024ul,true,eastl::allocator>::fixed_vector
                ((fixed_vector<unsigned_short,1024ul,true,eastl::allocator> *)local_830,
                 (ulong)*(ushort *)(this + 0xe0),&local_832);
      puVar4 = (ushort *)FUN_0537ac70(local_830[0],0);
      ReadUint16(this,puVar4,(ulong)*(ushort *)(this + 0xe0));
      pOVar5 = create_array<EA::Text::OTFChainClassSet>
                         ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(this + 0xe0));
      *(OTFChainClassSet **)(this + 0xe8) = pOVar5;
      if (*(short *)(this + 0xe0) != 0) {
        do {
          iVar2 = *(int *)(this + 0x34);
          lVar9 = uVar10 * 0x10;
          plVar11 = *(long **)(this + 0x1b0);
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar1;
          uVar3 = *(ushort *)(this + 0xa6);
          puVar4 = (ushort *)FUN_0537ac70(local_830[0]);
          (**(code **)(*plVar11 + 0x58))(plVar11,(uint)uVar3 + iVar2 + (uint)*puVar4,0);
          ReadUint16(this,(ushort *)(*(long *)(this + 0xe8) + lVar9));
          lVar6 = *(long *)(this + 0xe8);
          puVar4 = create_array<unsigned_short>
                             ((StackAllocator *)(this + 0x1b8),(ulong)*(ushort *)(lVar6 + lVar9));
          lVar7 = *(long *)(this + 0xe8);
          *(ushort **)(lVar6 + lVar9 + 8) = puVar4;
          ReadUint16(this,*(ushort **)(lVar7 + lVar9 + 8),(ulong)*(ushort *)(lVar7 + lVar9));
        } while (uVar1 < *(ushort *)(this + 0xe0));
      }
      ReadCoverage(this,(OTFCoverage *)(this + 0xd0),
                   (uint)*(ushort *)(this + 0xa6) + (uint)*(ushort *)(this + 200) +
                   *(int *)(this + 0x34));
      eastl::fixed_vector<unsigned_short,1024ul,true,eastl::allocator>::~fixed_vector
                ((fixed_vector<unsigned_short,1024ul,true,eastl::allocator> *)local_830);
    }
    if (*(short *)(this + 0xa8) != 0) {
      *(undefined8 *)(this + 0xf0) = 0;
      *(undefined8 *)(this + 0xf8) = 0;
      *(undefined8 *)(this + 0x100) = 0;
      *(undefined8 *)(this + 0x108) = 0;
    }
    uVar8 = 1;
    if (*(short *)(this + 0xaa) != 0) {
      uVar3 = FUN_0537ac30();
      *(ushort *)(this + 0xaa) = uVar3;
      ReadClassDef(this,(OTFClassDef *)(this + 0x110),*(int *)(this + 0x34) + (uint)uVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* EA::Text::OTF::Load(EA::IO::IStream*) */

char __thiscall EA::Text::OTF::Load(OTF *this,IStream *param_1)

{
  char cVar1;
  long lVar2;
  wchar16 *extraout_x1;
  LineBreakCategory *pLVar3;
  code *pcVar4;
  code *pcVar5;
  
  if (this[0x1a8] == (OTF)0x0) {
    pLVar3 = (LineBreakCategory *)0x200;
    this[0x1a8] = (OTF)0x1;
    pcVar4 = StackAllocatorCoreAllocate;
    pcVar5 = StackAllocatorCoreFree;
    Allocator::StackAllocator::Init
              ((StackAllocator *)(this + 0x1b8),(void *)0x0,0x200,StackAllocatorCoreAllocate,
               StackAllocatorCoreFree,*(void **)(this + 0x200));
    lVar2 = *(long *)param_1;
    *(IStream **)(this + 0x1b0) = param_1;
    (**(code **)(lVar2 + 0x10))(param_1);
    cVar1 = ReadTableDirectory(this);
    if (cVar1 != '\0') {
      ReadHead(this);
      GlyphCache_Memory::EndUpdate((TextureInfo *)this);
      ReadGdef(this);
      ReadGsub(this);
      LineBreakIterator::GetNextSoutheastAsianLineBreak
                ((wchar16 *)this,extraout_x1,pLVar3,(LineBreakCategory *)pcVar4,
                 (LineBreakCategory *)pcVar5);
      return cVar1;
    }
  }
  return '\0';
}

