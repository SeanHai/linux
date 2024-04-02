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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x645babc5, "sst_register_dsp" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0xb99fb753, "sst_unregister_dsp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb2f6ee2a, "pm_qos_add_request" },
	{ 0x808a2189, "pm_qos_remove_request" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb5848bae, "__iowrite32_copy" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb89c3d70, "pm_qos_update_request" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0x121da905, "queue_work_on" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-sst-atom-hifi2-platform";


MODULE_INFO(srcversion, "96F1E42BE5D49A3F8E55836");
MODULE_INFO(rhelversion, "8.0");
