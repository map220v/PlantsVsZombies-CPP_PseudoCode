// Class: BoardConstants


/* BoardConstants::GRIDSQUARE_WIDTH() */

undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


/* BoardConstants::IsCardGameScale() */

bool BoardConstants::IsCardGameScale(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (gGameStateMgr != 0) {
    iVar2 = FUN_0357170c(*(undefined4 *)(gGameStateMgr + 0x1ec0));
    bVar1 = iVar2 == 0xb;
  }
  return bVar1;
}


/* BoardConstants::IsNewPVPScale() */

bool BoardConstants::IsNewPVPScale(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (gGameStateMgr != 0) {
    iVar2 = FUN_0351456c(*(undefined4 *)(gGameStateMgr + 0x1ec0));
    bVar1 = iVar2 == 0xc;
  }
  return bVar1;
}


/* BoardConstants::NUMBER_OF_ROWS() */

undefined8 BoardConstants::NUMBER_OF_ROWS(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 5;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


/* BoardConstants::NUMBER_OF_COLUMNS() */

undefined8 BoardConstants::NUMBER_OF_COLUMNS(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xd;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


/* BoardConstants::GRIDSQUARE_HEIGHT() */

undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


/* BoardConstants::NUMBER_OF_SQUARES() */

int BoardConstants::NUMBER_OF_SQUARES(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = NUMBER_OF_ROWS();
  iVar2 = NUMBER_OF_COLUMNS();
  return iVar1 * iVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_HEIGHT(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x4c;
  }
  else {
    uVar2 = 0x36;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}


undefined8 BoardConstants::GRIDSQUARE_WIDTH(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsCardGameScale();
  if ((cVar1 == '\0') && (cVar1 = IsNewPVPScale(), cVar1 == '\0')) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x2c;
  }
  return uVar2;
}

