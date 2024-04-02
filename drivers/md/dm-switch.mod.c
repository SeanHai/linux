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
	{ 0xefde5167, "dm_unregister_target" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x61af2439, "dm_set_target_max_io_len" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "4DE01EDFBB8492FEBF2DFCB");
MODULE_INFO(rhelversion, "8.0");
