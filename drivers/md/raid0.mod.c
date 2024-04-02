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
	{ 0x40f3e50c, "unregister_md_personality" },
	{ 0x27e0994c, "register_md_personality" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x5484198, "bio_endio" },
	{ 0xc8b1501c, "bio_clone_blkg_association" },
	{ 0x8cefde72, "__blkdev_issue_discard" },
	{ 0xe59da526, "md_flush_request" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfc128542, "bio_chain" },
	{ 0x58f9dbc, "bio_split" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x37b297c6, "__tracepoint_block_bio_remap" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0x7864f085, "md_integrity_register" },
	{ 0xdd45a0de, "md_set_array_sectors" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x67ae78d1, "disk_stack_limits" },
	{ 0x1b82c730, "blk_queue_io_opt" },
	{ 0xd9846e51, "blk_queue_io_min" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0x8f103d28, "blk_queue_max_write_zeroes_sectors" },
	{ 0xaae6569a, "blk_queue_max_write_same_sectors" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0xf776d564, "md_check_no_bitmap" },
	{ 0x27e1a049, "printk" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x28318305, "snprintf" },
	{ 0x510145f7, "bdevname" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F277086C0AB01B780D5A753");
MODULE_INFO(rhelversion, "8.0");
