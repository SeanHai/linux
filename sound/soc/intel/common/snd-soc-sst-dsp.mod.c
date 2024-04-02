#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D761723CDFCDF852DA289E7");
MODULE_INFO(rhelversion, "8.0");
