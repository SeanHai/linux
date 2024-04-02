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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x9839d98e, "snd_register_device" },
	{ 0xa9414778, "snd_device_initialize" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x14b34fc7, "snd_unregister_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "7E1E190D0FBCDAAB3982146");
MODULE_INFO(rhelversion, "8.0");
