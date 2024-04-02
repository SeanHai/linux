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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xefde5167, "dm_unregister_target" },
	{ 0x5dfc419b, "dm_register_target" },
	{ 0xe8e9988f, "raid5_set_cache_size" },
	{ 0xd2d3a9af, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0xe0d2158c, "md_start" },
	{ 0x561583b9, "md_run" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0xe25cfaae, "mddev_init" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0x9d953947, "dm_disk" },
	{ 0x783b1e86, "dm_table_get_md" },
	{ 0x335c76bf, "mddev_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7d0f3444, "md_wakeup_thread" },
	{ 0x7bfd35ba, "md_reap_sync_thread" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x52e2161f, "md_rdev_init" },
	{ 0xa5472d82, "dm_get_device" },
	{ 0x6d0f1f89, "dm_table_get_mode" },
	{ 0x61af2439, "dm_set_target_max_io_len" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x373db350, "kstrtoint" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c1b7a00, "mddev_congested" },
	{ 0xb7328889, "md_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x93da61de, "dm_put_device" },
	{ 0x83821daf, "md_rdev_clear" },
	{ 0x6e62deb, "md_handle_request" },
	{ 0xcafb0219, "md_stop_writes" },
	{ 0xd299775c, "mddev_suspend" },
	{ 0x64aed889, "md_bitmap_load" },
	{ 0xef71c808, "md_bitmap_resize" },
	{ 0xd1e6b4e9, "mddev_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6dd99ccd, "md_update_sb" },
	{ 0xe2766bf3, "md_error" },
	{ 0x9f8a4f50, "sync_page_io" },
	{ 0x27e1a049, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa5496cb6, "blk_limits_io_opt" },
	{ 0xa24ccc89, "blk_limits_io_min" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid456";


MODULE_INFO(srcversion, "51D66E5D95913390CF1DC05");
MODULE_INFO(rhelversion, "8.0");
