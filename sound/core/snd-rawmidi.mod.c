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
	{ 0xfb2485f, "put_pid" },
	{ 0x9839d98e, "snd_register_device" },
	{ 0x919eca22, "snd_device_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x980e286b, "snd_card_file_remove" },
	{ 0xfbf61a86, "pid_vnr" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa9414778, "snd_device_initialize" },
	{ 0x28cde093, "no_llseek" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0x12c3f57a, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xba103dd1, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x14b34fc7, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x8bc0870, "compat_put_timespec" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x802b5089, "snd_card_file_add" },
	{ 0xfe2026b1, "snd_ctl_register_ioctl" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3ed24bd4, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x43ad0a4b, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf3809be7, "snd_ctl_get_preferred_subdevice" },
	{ 0xa9c53bfd, "snd_seq_device_new" },
	{ 0x121da905, "queue_work_on" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x45333c2b, "snd_ctl_unregister_ioctl_compat" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device";


MODULE_INFO(srcversion, "02AF543DBC244558D1DD86D");
MODULE_INFO(rhelversion, "8.0");
