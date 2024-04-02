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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9839d98e, "snd_register_device" },
	{ 0x980e286b, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa9414778, "snd_device_initialize" },
	{ 0x12c3f57a, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xba103dd1, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0x14b34fc7, "snd_unregister_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x802b5089, "snd_card_file_add" },
	{ 0xfe2026b1, "snd_ctl_register_ioctl" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3ed24bd4, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x43ad0a4b, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x45333c2b, "snd_ctl_unregister_ioctl_compat" },
	{ 0xf84366d7, "snd_info_create_module_entry" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "5BF1EEF1432E8E7F8682C00");
MODULE_INFO(rhelversion, "8.0");
