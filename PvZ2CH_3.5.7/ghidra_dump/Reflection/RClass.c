// Class: Reflection::RClass


/* Reflection::RClass::GetMethods(bool) const */

RClass * __thiscall Reflection::RClass::GetMethods(RClass *this,bool param_1)

{
  RClass *pRVar1;
  
  pRVar1 = this + 0x138;
  if (param_1) {
    pRVar1 = this + 0x2e0;
  }
  return pRVar1;
}


/* Reflection::RClass::StaticGetTypeCategory() */

undefined8 Reflection::RClass::StaticGetTypeCategory(void)

{
  return 0x20;
}


/* Reflection::RClass::GetFields(bool) const */

RClass * __thiscall Reflection::RClass::GetFields(RClass *this,bool param_1)

{
  RClass *pRVar1;
  
  pRVar1 = this + 0x98;
  if (param_1) {
    pRVar1 = this + 0x240;
  }
  return pRVar1;
}


/* Reflection::RClass::GetTypeCategory() const */

undefined8 Reflection::RClass::GetTypeCategory(void)

{
  return 0x20;
}


/* Reflection::RClass::GetProperties(bool) const */

RClass * __thiscall Reflection::RClass::GetProperties(RClass *this,bool param_1)

{
  RClass *pRVar1;
  
  pRVar1 = this + 0xe8;
  if (param_1) {
    pRVar1 = this + 0x290;
  }
  return pRVar1;
}


/* Reflection::RClass::GetAncestors() const */

RClass * __thiscall Reflection::RClass::GetAncestors(RClass *this)

{
  return this + 0x1d8;
}


/* Reflection::RClass::GetAttributes(bool) const */

RClass * __thiscall Reflection::RClass::GetAttributes(RClass *this,bool param_1)

{
  RClass *pRVar1;
  
  pRVar1 = this + 0x10;
  if (param_1) {
    pRVar1 = this + 0x380;
  }
  return pRVar1;
}


/* Reflection::RClass::LoadClass() */

void __thiscall Reflection::RClass::LoadClass(RClass *this)

{
  (**(code **)(**(long **)(*(long *)(this + 0x78) + 0xf0) + 8))
            (*(long **)(*(long *)(this + 0x78) + 0xf0),this);
  return;
}


/* Reflection::RClass::FindVirtualBaseMethod(Reflection::RMethod*) */

RAttribute * __thiscall Reflection::RClass::FindVirtualBaseMethod(RClass *this,RMethod *param_1)

{
  CRefNamedSymbolCollection *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RAttribute *pRVar4;
  char *__s1;
  char *__s2;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  RClass *this_01;
  uint uVar8;
  uint uVar9;
  
  this_00 = (CRefNamedSymbolCollection *)(this + 0x138);
  uVar8 = 0;
  iVar2 = CRefNamedSymbolCollection::GetCount(this_00);
  while (uVar9 = uVar8, (int)uVar8 < iVar2) {
    while( true ) {
      uVar8 = uVar9 + 1;
      pRVar4 = (RAttribute *)
               TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                         ((TRefNamedSymbolCollection<Reflection::RType> *)this_00,uVar9);
      __s1 = (char *)RAttribute::GetName(pRVar4);
      __s2 = (char *)RAttribute::GetName((RAttribute *)param_1);
      iVar3 = strcmp(__s1,__s2);
      if (iVar3 != 0) break;
      plVar5 = (long *)FUN_0517ebec(*(undefined8 *)(pRVar4 + 0x90));
      uVar6 = FUN_0517ebec(*(undefined8 *)(param_1 + 0x90));
      cVar1 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar6,1,0);
      if (cVar1 != '\0') {
        return pRVar4;
      }
      iVar2 = CRefNamedSymbolCollection::GetCount(this_00);
      uVar9 = uVar8;
      if (iVar2 <= (int)uVar8) goto LAB_051829ac;
    }
  }
LAB_051829ac:
  uVar8 = 0;
  do {
    iVar2 = CRefNamedSymbolCollection::GetCount((CRefNamedSymbolCollection *)(this + 0x1d8));
    uVar9 = uVar8 + 1;
    if (iVar2 <= (int)uVar8) {
      return (RAttribute *)0x0;
    }
    lVar7 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                      ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x1d8),uVar8);
    this_01 = (RClass *)FUN_051819d8(lVar7 + 0x80);
    uVar8 = uVar9;
  } while ((this_01 == (RClass *)0x0) ||
          (pRVar4 = (RAttribute *)FindVirtualBaseMethod(this_01,param_1),
          pRVar4 == (RAttribute *)0x0));
  return pRVar4;
}


/* Reflection::RClass::ResolveVirtualBases() */

void __thiscall Reflection::RClass::ResolveVirtualBases(RClass *this)

{
  uint uVar1;
  CRefNamedSymbolCollection *this_00;
  CRefNamedSymbolCollection *this_01;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  RClass *pRVar6;
  RMethod *pRVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  
  uVar4 = *(uint *)(this + 0x84);
  uVar10 = uVar4 & 0x1000000;
  if ((uVar4 >> 0x18 & 1) == 0) {
    this_00 = (CRefNamedSymbolCollection *)(this + 0x1d8);
    *(uint *)(this + 0x84) = uVar4 | 0x1000000;
    while (iVar3 = CRefNamedSymbolCollection::GetCount(this_00), uVar4 = uVar10, (int)uVar10 < iVar3
          ) {
      while( true ) {
        uVar10 = uVar4 + 1;
        lVar5 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                          ((TRefNamedSymbolCollection<Reflection::RType> *)this_00,uVar4);
        pRVar6 = (RClass *)FUN_051819d8(lVar5 + 0x80);
        if (pRVar6 == (RClass *)0x0) break;
        ResolveVirtualBases(pRVar6);
        iVar3 = CRefNamedSymbolCollection::GetCount(this_00);
        uVar4 = uVar10;
        if (iVar3 <= (int)uVar10) goto LAB_05182abc;
      }
    }
LAB_05182abc:
    this_01 = (CRefNamedSymbolCollection *)(this + 0x138);
    uVar10 = 0;
    iVar3 = CRefNamedSymbolCollection::GetCount(this_01);
    if (0 < iVar3) {
      do {
        pRVar7 = (RMethod *)
                 TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                           ((TRefNamedSymbolCollection<Reflection::RType> *)this_01,uVar10);
        cVar2 = FUN_0517ebdc(*(undefined4 *)(pRVar7 + 0x78));
        if (cVar2 != '\0') {
          lVar5 = FUN_0517ebe4(*(undefined8 *)(pRVar7 + 0x88));
          uVar4 = 0;
          if (lVar5 == 0) {
            do {
              do {
                iVar3 = CRefNamedSymbolCollection::GetCount(this_00);
                uVar1 = uVar4 + 1;
                if (iVar3 <= (int)uVar4) goto LAB_05182be0;
                lVar5 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                  ((TRefNamedSymbolCollection<Reflection::RType> *)this_00,uVar4);
                pRVar6 = (RClass *)FUN_051819d8(lVar5 + 0x80);
                uVar4 = uVar1;
              } while (pRVar6 == (RClass *)0x0);
              uVar9 = FindVirtualBaseMethod(pRVar6,pRVar7);
              *(undefined8 *)(pRVar7 + 0x88) = uVar9;
              lVar5 = FUN_0517ebe4();
            } while (lVar5 == 0);
LAB_05182be0:
            iVar3 = CRefNamedSymbolCollection::GetCount(this_01);
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar3);
    }
    for (uVar10 = 0; (int)uVar10 < iVar3; uVar10 = uVar10 + 1) {
      lVar5 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                        ((TRefNamedSymbolCollection<Reflection::RType> *)this_01,uVar10);
      cVar2 = FUN_0517ebdc(*(undefined4 *)(lVar5 + 0x78));
      if ((cVar2 != '\0') && (iVar3 = FUN_0517ebe8(*(undefined4 *)(lVar5 + 0x80)), iVar3 == -1)) {
        for (lVar8 = FUN_0517ebe4(*(undefined8 *)(lVar5 + 0x88)); lVar8 != 0;
            lVar8 = FUN_0517ebe4(*(undefined8 *)(lVar8 + 0x88))) {
          iVar3 = FUN_0517ebe8(*(undefined4 *)(lVar8 + 0x80));
          if (iVar3 != -1) {
            *(int *)(lVar5 + 0x80) = iVar3;
            break;
          }
        }
      }
      iVar3 = CRefNamedSymbolCollection::GetCount(this_01);
    }
    uVar10 = 0;
    while (iVar3 = CRefNamedSymbolCollection::GetCount(this_00), uVar4 = uVar10, (int)uVar10 < iVar3
          ) {
      while( true ) {
        uVar10 = uVar4 + 1;
        lVar5 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                          ((TRefNamedSymbolCollection<Reflection::RType> *)this_00,uVar4);
        lVar5 = FUN_051819d8(lVar5 + 0x80);
        if ((lVar5 == 0) ||
           (uVar4 = FUN_0517ebac(*(undefined4 *)(lVar5 + 0x88)), uVar4 <= *(uint *)(this + 0x88)))
        break;
        *(uint *)(this + 0x88) = uVar4;
        iVar3 = CRefNamedSymbolCollection::GetCount(this_00);
        uVar4 = uVar10;
        if (iVar3 <= (int)uVar10) {
          return;
        }
      }
    }
  }
  return;
}


/* Reflection::RClass::GetPrimaryAncestor() const */

undefined8 __thiscall Reflection::RClass::GetPrimaryAncestor(RClass *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CRefNamedSymbolCollection *this_00;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  this_00 = (CRefNamedSymbolCollection *)GetAncestors(this);
  uVar2 = CRefNamedSymbolCollection::GetCount(this_00);
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = 0;
  do {
    uVar1 = uVar6 + 1;
    lVar4 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                      ((TRefNamedSymbolCollection<Reflection::RType> *)this_00,uVar6);
    iVar3 = FUN_0517ec34(*(undefined4 *)(lVar4 + 0x7c));
    if (iVar3 == 0) {
      uVar5 = FUN_051819d8(lVar4 + 0x80);
      return uVar5;
    }
    uVar6 = uVar1;
  } while (uVar1 != uVar2);
  lVar4 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                    ((TRefNamedSymbolCollection<Reflection::RType> *)this_00,0);
  uVar5 = FUN_051819d8(lVar4 + 0x80);
  return uVar5;
}


/* Reflection::RClass::StaticGetClass() */

long * Reflection::RClass::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RNamedType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RClass",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RClass::GetClass() const */

long * Reflection::RClass::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RNamedType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RClass",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RClass::InstanceNavigatePath(void*&, std::string&, Reflection::RType*&) const */

void __thiscall
Reflection::RClass::InstanceNavigatePath
          (RClass *this,void **param_1,string *param_2,RType **param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  TRefNamedSymbolCollection<Reflection::RAncestor> *pTVar4;
  RType *pRVar5;
  size_t __n;
  long lVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_20);
  Set8BytesTo0(asStack_18);
  uVar2 = FUN_054743b0(param_2,0x2e,0);
  __n = 0;
  uVar3 = FUN_054743b0(param_2,0x5b);
  if (uVar2 == 0xffffffffffffffff) {
    lVar6 = 0;
    if (uVar3 == 0xffffffffffffffff) {
      thunk_FUN_05475e00(asStack_20,param_2);
      pTVar4 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)GetFields(this,true);
      lVar6 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar4,asStack_20);
      goto joined_r0x0518537c;
    }
  }
  else if ((uVar3 == 0xffffffffffffffff) || (lVar6 = 0, uVar2 < uVar3)) {
    lVar6 = 1;
    uVar3 = uVar2;
  }
  FUN_05475ffc(asStack_10,param_2,0,uVar3);
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  __n = 0xffffffffffffffff;
  FUN_05475ffc(asStack_10,param_2,uVar3 + lVar6);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  pTVar4 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)GetFields(this,true);
  lVar6 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar4,asStack_20);
joined_r0x0518537c:
  if (lVar6 == 0) {
    pTVar4 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)GetProperties(this,true);
    lVar6 = TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar4,asStack_20);
    cVar1 = '\0';
    if (lVar6 == 0) {
      std::string::append(param_2,"",__n);
    }
  }
  else {
    uVar3 = FUN_0517ebc0(*(undefined4 *)(lVar6 + 0x7c));
    *param_1 = (void *)((long)*param_1 + (uVar3 & 0xffffffff));
    thunk_FUN_05475e00(param_2,asStack_18);
    pRVar5 = (RType *)FUN_0517ebc4(*(undefined8 *)(lVar6 + 0x80));
    *param_3 = pRVar5;
    cVar1 = FUN_0547419c(param_2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(long *)pRVar5 + 0x70))(pRVar5,param_1,param_2,param_3);
    }
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* Reflection::RClass::RClass() */

void __thiscall Reflection::RClass::RClass(RClass *this)

{
  RNamedType::RNamedType((RNamedType *)this);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2f500;
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x98));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0xe8));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x138));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x188));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x1d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x240));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x290));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x2e0));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x330));
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x380));
  FUN_0517f6a8(this + 0x288);
  FUN_0517f6a8(this + 0x2d8);
  FUN_0517f6a8(this + 0x328);
  FUN_0517f6a8(this + 0x3c8);
  return;
}


/* Reflection::RClass::StaticNew() */

RClass * Reflection::RClass::StaticNew(void)

{
  RClass *this;
  
  this = ::operator_new(0x3d0);
  RClass(this);
  return this;
}


/* Reflection::RClass::~RClass() */

void __thiscall Reflection::RClass::~RClass(RClass *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f500;
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x380));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x330));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x2e0));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x290));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x240));
  std::vector<Reflection::RClass::CPreAttribute,std::allocator<Reflection::RClass::CPreAttribute>>::
  ~vector((vector<Reflection::RClass::CPreAttribute,std::allocator<Reflection::RClass::CPreAttribute>>
           *)(this + 0x228));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x1d8));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x188));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x138));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0xe8));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x98));
  RNamedType::~RNamedType((RNamedType *)this);
  return;
}


/* Reflection::RClass::~RClass() */

void __thiscall Reflection::RClass::~RClass(RClass *this)

{
  ~RClass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RClass::InstanceToString(void const*) const */

void Reflection::RClass::InstanceToString(void *param_1)

{
  char cVar1;
  int iVar2;
  TRefNamedSymbolCollection<Reflection::RAncestor> *pTVar3;
  RAttribute *this;
  RMethod *this_00;
  RFunctionType *this_01;
  undefined8 uVar4;
  wchar_t *in_x1;
  string *in_x8;
  wchar_t *pwVar5;
  string asStack_148 [8];
  RtInvokeVariant aRStack_140 [16];
  RtInvokeVariant aRStack_130 [16];
  string asStack_120 [24];
  wchar_t awStack_108 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar3 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)GetAttributes(param_1,true);
  std::string::string(asStack_120,"ToStringMethod");
  this = (RAttribute *)
         TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar3,asStack_120);
  std::string::~string(asStack_120);
  nop();
  if (this == (RAttribute *)0x0) {
    std::string::string(asStack_148,"");
    nop();
    cVar1 = FUN_0547419c(asStack_148);
  }
  else {
    RAttribute::GetValue(this);
    CRefAttributeVariant::GetString();
    cVar1 = FUN_0547419c(asStack_148);
  }
  if (cVar1 == '\0') {
    pTVar3 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)GetMethods(param_1,true);
    this_00 = (RMethod *)
              TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(pTVar3,asStack_148);
    if (this_00 != (RMethod *)0x0) {
      this_01 = (RFunctionType *)FUN_0517ebec(*(undefined8 *)(this_00 + 0x90));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_120);
      Sexy::RtInvokeVariant::RtInvokeVariant(aRStack_140);
      iVar2 = RFunctionType::GetArgTypeCount(this_01);
      pwVar5 = in_x1;
      if (iVar2 == 2) {
LAB_0519357c:
        Sexy::RtInvokeVariant::RtInvokeVariant(aRStack_130,awStack_108);
        std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::push_back
                  ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                   asStack_120,aRStack_130);
        Sexy::LeaderboardEntry::FieldData::FieldData((FieldData *)aRStack_130,0x100);
        std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::push_back
                  ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                   asStack_120,aRStack_130);
      }
      else if (iVar2 == 3) {
        pwVar5 = (wchar_t *)0x0;
        Sexy::RtInvokeVariant::RtInvokeVariant(aRStack_130,in_x1);
        std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::push_back
                  ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                   asStack_120,aRStack_130);
        goto LAB_0519357c;
      }
      cVar1 = RMethod::Invoke(this_00,aRStack_140,pwVar5,(vector *)asStack_120);
      if (cVar1 == '\0') {
        uVar4 = RNamedType::GetName(param_1);
        Sexy::StrFormat("(%s)",uVar4);
      }
      else {
        std::string::string(in_x8,(char *)awStack_108);
        nop();
      }
      std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::~vector
                ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)asStack_120)
      ;
      goto LAB_05193440;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_05193440:
  std::string::~string(asStack_148);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RClass::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&, std::vector<std::string, std::allocator<std::string > > const&) const */

void __thiscall
Reflection::RClass::InstanceRtonSync
          (RClass *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,
          vector *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  CRefNamedSymbolCollection *this_00;
  CRefNamedSymbolCollection *this_01;
  RtSerialRtonReader *pRVar6;
  RAttribute *pRVar7;
  char *pcVar8;
  RMethod *pRVar9;
  string *psVar10;
  RtSerialRtonWriter *pRVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  string *extraout_x1_01;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  string asStack_f8 [16];
  string asStack_e8 [24];
  RtSerialRtonKey aRStack_d0 [40];
  string asStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtSerialRtonSync::SyncBeginObject(param_2,param_3);
  if (cVar1 != '\0') {
    this_00 = (CRefNamedSymbolCollection *)GetFields(this,true);
    uVar3 = CRefNamedSymbolCollection::GetCount(this_00);
    this_01 = (CRefNamedSymbolCollection *)GetProperties(this,true);
    uVar4 = CRefNamedSymbolCollection::GetCount(this_01);
    cVar2 = FUN_0517e1f8(param_2[0x10]);
    if (cVar2 == '\0') {
      cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)param_4);
      if (cVar2 == '\0') {
        uVar5 = FUN_0517f094(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8));
        uVar13 = 0;
        if (uVar3 != 0) {
          do {
            lVar12 = 0;
            pRVar7 = (RAttribute *)
                     TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                               ((TRefNamedSymbolCollection<Reflection::RField> *)this_00,uVar13);
            if (uVar5 != 0) {
              do {
                psVar10 = (string *)FUN_0517f0a0(*(undefined8 *)param_4,lVar12);
                pcVar8 = (char *)RAttribute::GetName(pRVar7);
                std::string::string(asStack_a8,pcVar8);
                cVar2 = Sexy::StringWildcardMatches(psVar10,asStack_a8,false);
                std::string::~string(asStack_a8);
                nop();
                if (cVar2 != '\0') {
                  pcVar8 = (char *)RAttribute::GetName(pRVar7);
                  Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_a8,pcVar8);
                  RField::InstanceRtonSync
                            ((RField *)pRVar7,param_1,param_2,(RtSerialRtonKey *)asStack_a8);
                  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_a8);
                  break;
                }
                lVar12 = lVar12 + 1;
              } while ((uint)lVar12 < uVar5);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar3);
        }
        uVar3 = 0;
        if (uVar4 != 0) {
          do {
            pRVar7 = (RAttribute *)
                     TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                               ((TRefNamedSymbolCollection<Reflection::RType> *)this_01,uVar3);
            cVar2 = FUN_0517ebc8(*(undefined4 *)(pRVar7 + 0x78));
            if (cVar2 == '\0') {
              lVar12 = 0;
              pcVar8 = (char *)RAttribute::GetName(pRVar7);
              std::string::string(asStack_a8,pcVar8);
              Sexy::Lower((Sexy *)asStack_a8,extraout_x1_01);
              std::string::~string(asStack_a8);
              nop();
              if (uVar5 != 0) {
                do {
                  psVar10 = (string *)FUN_0517f0a0(*(undefined8 *)param_4,lVar12);
                  cVar2 = Sexy::StringWildcardMatches(psVar10,asStack_f8,false);
                  if (cVar2 != '\0') {
                    pRVar9 = (RMethod *)FUN_0517ebd0(*(undefined8 *)(pRVar7 + 0x80));
                    if ((pRVar9 != (RMethod *)0x0) &&
                       (cVar2 = FUN_0517ec0c(*(undefined4 *)(pRVar9 + 0x78),param_1 != (void *)0x0),
                       cVar2 != '\0')) {
                      pRVar11 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
                      std::string::string(asStack_e8,"");
                      pcVar8 = (char *)RAttribute::GetName(pRVar7);
                      std::string::string((string *)aRStack_d0,pcVar8);
                      Sexy::RtSerialCommand::RtSerialCommand
                                ((RtSerialCommand *)asStack_a8,0,(RtSerialRtonReader *)0x0,pRVar11,
                                 asStack_e8,(string *)aRStack_d0);
                      std::string::~string((string *)aRStack_d0);
                      nop();
                      std::string::~string(asStack_e8);
                      nop();
                      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                                 aRStack_d0);
                      Sexy::RtInvokeVariant::RtInvokeVariant
                                ((RtInvokeVariant *)asStack_e8,(wchar_t *)asStack_a8);
                      std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::
                      push_back((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>
                                 *)aRStack_d0,(RtInvokeVariant *)asStack_e8);
                      Sexy::RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)asStack_e8);
                      RMethod::Invoke(pRVar9,(RtInvokeVariant *)asStack_e8,param_1,
                                      (vector *)aRStack_d0);
                      std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::
                      ~vector((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *
                              )aRStack_d0);
                      Sexy::RtSerialCommand::~RtSerialCommand((RtSerialCommand *)asStack_a8);
                    }
                    break;
                  }
                  lVar12 = lVar12 + 1;
                } while ((uint)lVar12 < uVar5);
              }
              std::string::~string(asStack_f8);
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar4);
        }
      }
      else {
        uVar13 = 0;
        if (uVar3 != 0) {
          do {
            uVar5 = uVar13 + 1;
            pRVar7 = (RAttribute *)
                     TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                               ((TRefNamedSymbolCollection<Reflection::RField> *)this_00,uVar13);
            pcVar8 = (char *)RAttribute::GetName(pRVar7);
            Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_a8,pcVar8);
            RField::InstanceRtonSync((RField *)pRVar7,param_1,param_2,(RtSerialRtonKey *)asStack_a8)
            ;
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_a8);
            uVar13 = uVar5;
          } while (uVar5 != uVar3);
        }
        uVar3 = 0;
        if (uVar4 != 0) {
          do {
            pRVar7 = (RAttribute *)
                     TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                               ((TRefNamedSymbolCollection<Reflection::RType> *)this_01,uVar3);
            cVar2 = FUN_0517ebc8(*(undefined4 *)(pRVar7 + 0x78));
            if (((cVar2 == '\0') &&
                (pRVar9 = (RMethod *)FUN_0517ebd0(*(undefined8 *)(pRVar7 + 0x80)),
                pRVar9 != (RMethod *)0x0)) &&
               (cVar2 = FUN_0517ec0c(*(undefined4 *)(pRVar9 + 0x78),param_1 != (void *)0x0),
               cVar2 != '\0')) {
              pRVar11 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
              std::string::string(asStack_e8,"");
              pcVar8 = (char *)RAttribute::GetName(pRVar7);
              std::string::string((string *)aRStack_d0,pcVar8);
              Sexy::RtSerialCommand::RtSerialCommand
                        ((RtSerialCommand *)asStack_a8,0,(RtSerialRtonReader *)0x0,pRVar11,
                         asStack_e8,(string *)aRStack_d0);
              std::string::~string((string *)aRStack_d0);
              nop();
              std::string::~string(asStack_e8);
              nop();
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                        ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_d0
                        );
              Sexy::RtInvokeVariant::RtInvokeVariant
                        ((RtInvokeVariant *)asStack_e8,(wchar_t *)asStack_a8);
              std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::push_back
                        ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                         aRStack_d0,(RtInvokeVariant *)asStack_e8);
              Sexy::RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)asStack_e8);
              RMethod::Invoke(pRVar9,(RtInvokeVariant *)asStack_e8,param_1,(vector *)aRStack_d0);
              std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::~vector
                        ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                         aRStack_d0);
              Sexy::RtSerialCommand::~RtSerialCommand((RtSerialCommand *)asStack_a8);
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar4);
          Sexy::RtSerialRtonSync::SyncEndObject(param_2);
          goto LAB_0519393c;
        }
      }
    }
    else {
      pRVar6 = (RtSerialRtonReader *)FUN_0517e208(*(undefined8 *)param_2);
      auVar15 = Sexy::RtSerialRtonReader::GetCurrentScope(pRVar6);
      uVar14 = auVar15._8_8_ & 0xffffffff;
      if (uVar3 != 0) {
        uVar13 = 0;
        do {
          while( true ) {
            pRVar7 = (RAttribute *)
                     TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                               ((TRefNamedSymbolCollection<Reflection::RField> *)this_00,uVar13);
            pcVar8 = (char *)RAttribute::GetName(pRVar7);
            std::string::string(asStack_a8,pcVar8);
            FUN_0517fed0(auVar15._0_8_,uVar14,asStack_a8);
            std::string::~string(asStack_a8);
            nop();
            cVar2 = FUN_0517e1ec(extraout_x1 & 0xffffffff);
            if (cVar2 == '\0') break;
            uVar13 = uVar13 + 1;
            pcVar8 = (char *)RAttribute::GetName(pRVar7);
            Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)asStack_a8,pcVar8);
            RField::InstanceRtonSync((RField *)pRVar7,param_1,param_2,(RtSerialRtonKey *)asStack_a8)
            ;
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_a8);
            if (uVar13 == uVar3) goto LAB_0519371c;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar3);
      }
LAB_0519371c:
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          while( true ) {
            pRVar7 = (RAttribute *)
                     TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                               ((TRefNamedSymbolCollection<Reflection::RType> *)this_01,uVar3);
            cVar2 = FUN_0517ebc8(*(undefined4 *)(pRVar7 + 0x78));
            if (cVar2 == '\0') break;
LAB_05193748:
            uVar3 = uVar3 + 1;
            if (uVar3 == uVar4) goto LAB_05193934;
          }
          pcVar8 = (char *)RAttribute::GetName(pRVar7);
          std::string::string(asStack_a8,pcVar8);
          FUN_0517fed0(auVar15._0_8_,uVar14,asStack_a8);
          std::string::~string(asStack_a8);
          nop();
          cVar2 = FUN_0517e1ec(extraout_x1_00 & 0xffffffff);
          if (((cVar2 == '\0') ||
              (pRVar9 = (RMethod *)FUN_0517ebd4(*(undefined8 *)(pRVar7 + 0x88)),
              pRVar9 == (RMethod *)0x0)) ||
             (cVar2 = FUN_0517ec0c(*(undefined4 *)(pRVar9 + 0x78),param_1 != (void *)0x0),
             cVar2 == '\0')) goto LAB_05193748;
          Sexy::RtSerialRtonWriter::RtSerialRtonWriter((RtSerialRtonWriter *)asStack_a8);
          uVar3 = uVar3 + 1;
          Sexy::RtSerialRtonWriter::BeginDocumentObject((RtSerialRtonWriter *)asStack_a8);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_d0,"returns");
          Sexy::RtSerialRtonWriter::BeginObject((RtSerialRtonWriter *)asStack_a8,aRStack_d0);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_d0);
          pRVar6 = (RtSerialRtonReader *)FUN_0517e208(*(undefined8 *)param_2);
          pcVar8 = (char *)RAttribute::GetName(pRVar7);
          std::string::string(asStack_f8,pcVar8);
          std::string::string(asStack_e8,"*");
          Sexy::RtSerialCommand::RtSerialCommand
                    ((RtSerialCommand *)aRStack_d0,1,pRVar6,(RtSerialRtonWriter *)asStack_a8,
                     asStack_f8,asStack_e8);
          std::string::~string(asStack_e8);
          nop();
          std::string::~string(asStack_f8);
          nop();
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_e8);
          Sexy::RtInvokeVariant::RtInvokeVariant
                    ((RtInvokeVariant *)asStack_f8,(wchar_t *)aRStack_d0);
          std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::push_back
                    ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                     asStack_e8,(RtInvokeVariant *)asStack_f8);
          Sexy::RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)asStack_f8);
          RMethod::Invoke(pRVar9,(RtInvokeVariant *)asStack_f8,param_1,(vector *)asStack_e8);
          std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::~vector
                    ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                     asStack_e8);
          Sexy::RtSerialCommand::~RtSerialCommand((RtSerialCommand *)aRStack_d0);
          Sexy::RtSerialRtonWriter::EndObject((RtSerialRtonWriter *)asStack_a8);
          Sexy::RtSerialRtonWriter::EndDocumentObject((RtSerialRtonWriter *)asStack_a8);
          Sexy::RtSerialRtonWriter::~RtSerialRtonWriter((RtSerialRtonWriter *)asStack_a8);
        } while (uVar3 != uVar4);
      }
    }
LAB_05193934:
    Sexy::RtSerialRtonSync::SyncEndObject(param_2);
  }
LAB_0519393c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RClass::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

void __thiscall
Reflection::RClass::InstanceRtonSync
          (RClass *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  undefined4 uVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar1 = InstanceRtonSync(this,param_1,param_2,param_3,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

