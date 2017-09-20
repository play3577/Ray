#ifndef _COMMAND_H_
#define _COMMAND_H_

////////////
//  定数  //
////////////
enum COMMAND {
  COMMAND_PLAYOUT,
  COMMAND_TIME,
  COMMAND_SIZE,
  COMMAND_CONST_TIME,
  COMMAND_THREAD,
  COMMAND_KOMI,
  COMMAND_HANDICAP,
  COMMAND_REUSE_SUBTREE,
  COMMAND_PONDERING,
  COMMAND_TREE_SIZE,
  COMMAND_NO_DEBUG,
  COMMAND_SUPERKO,
  COMMAND_SIM_MOVE,
  COMMAND_NO_EARLY_PASS,
  COMMAND_NO_NN,
  COMMAND_NO_GPU,
  COMMAND_NO_EXPAND,
  COMMAND_DEVICE_ID,
  COMMAND_MAX,
};


////////////
//  関数  //
////////////

// コマンドライン引数のコマンドの解析
void AnalyzeCommand( int argc, char **argv );

#endif
