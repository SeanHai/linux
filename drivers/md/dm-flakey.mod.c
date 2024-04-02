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
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5484198, "bio_endio" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5133d363, "dm_per_bio_data" },
	{ 0x27e1a049, "printk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "5D42D110C25E240244EB558");
MODULE_INFO(rhelversion, "8.0");
