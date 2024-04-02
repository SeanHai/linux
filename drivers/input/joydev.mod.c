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
	{ 0x28cde093, "no_llseek" },
	{ 0xc2dfb891, "input_unregister_handler" },
	{ 0x65a09adc, "input_register_handler" },
	{ 0x22250dd3, "input_open_device" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x27e1a049, "printk" },
	{ 0xa0ef795, "cdev_device_add" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x516df465, "input_register_handle" },
	{ 0x551be51f, "device_initialize" },
	{ 0x4fddfc7c, "input_class" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x85ffabba, "get_device" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf7f16b3f, "input_get_new_minor" },
	{ 0x1e0019e2, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x9a6b3206, "cdev_device_del" },
	{ 0xb1d8562a, "input_close_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf2536a31, "kill_fasync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x2e5a712c, "input_match_device_id" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x754d539c, "strlen" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0c86c05, "put_device" },
	{ 0xeb6b6275, "fasync_helper" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "DE1472AA05D7205AC865D44");
MODULE_INFO(rhelversion, "8.0");
