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
	{ 0x58f9dbc, "bio_split" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xd299775c, "mddev_suspend" },
	{ 0x37b297c6, "__tracepoint_block_bio_remap" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x40f3e50c, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0xe59da526, "md_flush_request" },
	{ 0x27e1a049, "printk" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x67ae78d1, "disk_stack_limits" },
	{ 0xfc128542, "bio_chain" },
	{ 0x2c456f2c, "generic_make_request" },
	{ 0x5484198, "bio_endio" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x510145f7, "bdevname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdd45a0de, "md_set_array_sectors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x335c76bf, "mddev_resume" },
	{ 0xf776d564, "md_check_no_bitmap" },
	{ 0x7864f085, "md_integrity_register" },
	{ 0x27e0994c, "register_md_personality" },
	{ 0x4863dc3, "bio_associate_blkg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F58D53AD3D753C2CBCD69DA");
MODULE_INFO(rhelversion, "8.0");
