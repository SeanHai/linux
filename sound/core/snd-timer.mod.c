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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9839d98e, "snd_register_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa9414778, "snd_device_initialize" },
	{ 0x28cde093, "no_llseek" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x14b34fc7, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf84366d7, "snd_info_create_module_entry" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "5FA5AA5655F75B8CFB664F5");
MODULE_INFO(rhelversion, "8.0");
