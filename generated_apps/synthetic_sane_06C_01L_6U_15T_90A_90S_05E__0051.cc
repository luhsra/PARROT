#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU1Task1Subtask0);
DeclareTask(CPU1Task1Subtask2);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask10);
DeclareTask(CPU1Task1Subtask14);
DeclareTask(CPU2Task2Subtask1);
DeclareTask(CPU2Task2Subtask5);
DeclareTask(CPU2Task2Subtask11);
DeclareTask(CPU3Task0Subtask4);
DeclareTask(CPU3Task0Subtask13);
DeclareTask(CPU4Task5Subtask6);
DeclareTask(CPU4Task5Subtask12);
DeclareTask(CPU5Task4Subtask7);
DeclareTask(CPU5Task4Subtask8);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 122); // 0
  SetEvent(CPU3Task0Subtask13,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 158); // 0
  SetEvent(CPU4Task5Subtask12,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 128); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 184); // 0
  ActivateTask(CPU1Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 67); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 22); // 0
  SetEvent(CPU1Task1Subtask2,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 22); // 0
  ActivateTask(CPU1Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 137); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 73); // 0
  ActivateTask(CPU1Task1Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 39); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 143); // 0
  ActivateTask(CPU1Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 41); // 0
  ActivateTask(CPU2Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 200); // 0
  SetEvent(CPU2Task2Subtask5,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask2.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 159); // 0
  ActivateTask(CPU2Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 79); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 117); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 30); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 24); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 58); // 0
  ActivateTask(CPU3Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 95); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 163); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 74); // 0
  SetEvent(CPU5Task4Subtask7,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 51); // 0
  ActivateTask(CPU4Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 173); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 180); // 0
  ActivateTask(CPU5Task4Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask6.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 82); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 176); // 0
  TerminateTask();

}