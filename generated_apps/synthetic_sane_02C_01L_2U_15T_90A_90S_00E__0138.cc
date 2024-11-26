#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task1Subtask11);
DeclareTask(CPU0Task1Subtask14);
DeclareTask(CPU0Task5Subtask2);
DeclareTask(CPU0Task5Subtask3);
DeclareTask(CPU1Task0Subtask5);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask13);
DeclareTask(CPU1Task3Subtask0);
DeclareTask(CPU1Task3Subtask1);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task3Subtask12);
DeclareTask(CPU1Task4Subtask6);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 82); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 19); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 162); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 126); // 0
  ActivateTask(CPU0Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 143); // 0
  ActivateTask(CPU1Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 25); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  ActivateTask(CPU1Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 178); // 0
  ActivateTask(CPU1Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 9); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 113); // 0
  ActivateTask(CPU1Task3Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 43); // 0
  ActivateTask(CPU1Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 195); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 174); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 102); // 0
  ActivateTask(CPU0Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 197); // 0
  TerminateTask();

}
