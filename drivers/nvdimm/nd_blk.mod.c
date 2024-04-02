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
	{ 0x21fee4f9, "nd_btt_probe" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0xfc46ea03, "nvdimm_namespace_common_probe" },
	{ 0xfa4e858e, "generic_end_io_acct" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x8acaadac, "nd_integrity_init" },
	{ 0x2c4d2080, "nvdimm_namespace_capacity" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd935d088, "is_nd_btt" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x2cb2f1f, "nvdimm_namespace_disk_name" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4b78f6eb, "blk_alloc_queue" },
	{ 0xf7d6636f, "current_task" },
	{ 0x34a57401, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x5e6f234f, "__nd_driver_register" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xae45802d, "generic_start_io_acct" },
	{ 0x5484198, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0xfce95602, "nvdimm_namespace_detach_btt" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0xe35b709a, "blk_queue_make_request" },
	{ 0x53528c9b, "nvdimm_namespace_attach_btt" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf0c6e6e4, "nvdimm_revalidate_disk" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0xae180b72, "bio_integrity_prep" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm,nd_btt";


MODULE_INFO(srcversion, "FBA4E99489A01203CCE6849");
MODULE_INFO(rhelversion, "8.0");
