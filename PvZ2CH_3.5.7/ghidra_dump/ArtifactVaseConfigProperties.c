// Class: ArtifactVaseConfigProperties


/* ArtifactVaseConfigProperties::ArtifactVaseConfigProperties() */

void __thiscall
ArtifactVaseConfigProperties::ArtifactVaseConfigProperties(ArtifactVaseConfigProperties *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  this[0x14] = (ArtifactVaseConfigProperties)0x0;
  *(undefined4 *)(this + 0xc) = 5;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}


/* ArtifactVaseConfigProperties::TEMPNAMEPLACEHOLDERVALUE(ArtifactVaseConfigProperties const&) const
    */

bool __thiscall
ArtifactVaseConfigProperties::operator==
          (ArtifactVaseConfigProperties *this,ArtifactVaseConfigProperties *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = std::operator==((string *)param_1,(string *)this);
  bVar1 = false;
  if ((((cVar2 != '\0') && (bVar1 = false, *(int *)(param_1 + 8) == *(int *)(this + 8))) &&
      (*(int *)(param_1 + 0x10) == *(int *)(this + 0x10))) &&
     (*(int *)(param_1 + 0xc) == *(int *)(this + 0xc))) {
    bVar1 = param_1[0x14] == this[0x14];
  }
  return bVar1;
}


/* ArtifactVaseConfigProperties::TEMPNAMEPLACEHOLDERVALUE(ArtifactVaseConfigProperties const&) */

ArtifactVaseConfigProperties * __thiscall
ArtifactVaseConfigProperties::operator=
          (ArtifactVaseConfigProperties *this,ArtifactVaseConfigProperties *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return this;
}

