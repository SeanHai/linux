#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x6f9c1e8b, "fw_iso_context_flush_completions" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x5ecc37e, "snd_pcm_hw_constraint_step" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x2bc59db0, "snd_pcm_hw_constraint_msbits" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6e0d4e, "fw_iso_context_start" },
	{ 0x1cb03603, "fw_iso_context_queue_flush" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd0cb222b, "fw_iso_resource_manage" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x86468d44, "fw_rcode_string" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xcc20531d, "bpf_trace_run5" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd9eb5f45, "fw_iso_buffer_destroy" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe6478472, "_dev_info" },
	{ 0x8ee5612c, "fw_iso_context_queue" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xf49649cb, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xf15eb651, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xec88350c, "fw_core_remove_address_handler" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd305a58, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x2a7e08d3, "fw_iso_buffer_init" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0x807ab5cb, "fw_run_transaction" },
	{ 0x994a4ced, "fw_iso_context_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-pcm,snd-rawmidi";


MODULE_INFO(srcversion, "8FA1B1A7FCCF7C39C223186");
MODULE_INFO(rhelversion, "8.0");
