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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2cec6038, "kobject_put" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc1c066f7, "component_unbind_all" },
	{ 0x4614de75, "regmap_exit" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xa7ff2df7, "component_bind_all" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x1b765ef1, "component_match_add_release" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x63bd44a9, "component_master_del" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0xfdc8c9b3, "bpf_trace_run3" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc985b4ca, "kobject_create_and_add" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x91018733, "device_del" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe2a0e1e5, "__regmap_init" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x8b5104e4, "pm_runtime_get_if_in_use" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x373db350, "kstrtoint" },
	{ 0xcca62a76, "device_add" },
	{ 0x973d7fb, "kobject_add" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x12a38747, "usleep_range" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x551be51f, "device_initialize" },
	{ 0x217548d3, "kobject_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe47073f1, "snd_pcm_add_chmap_ctls" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0xfb06aa55, "component_master_add_with_match" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x85f5e2aa, "krealloc" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm";


MODULE_INFO(srcversion, "1A769CA3EFBC8EE8AD9856D");
MODULE_INFO(rhelversion, "8.0");
