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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x754d539c, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xd257960c, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x5efde8e6, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb275a3a0, "bus_for_each_dev" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd0c86c05, "put_device" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x85ffabba, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd27ba854, "bus_for_each_drv" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "03CB4FAE8F2EFBB29968126");
MODULE_INFO(rhelversion, "8.0");
