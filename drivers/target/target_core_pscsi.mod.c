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
	{ 0xdffc50d0, "passthrough_attrib_attrs" },
	{ 0x1bc703ac, "target_backend_unregister" },
	{ 0xec3f74be, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xd63b3cd4, "blkdev_get_by_path" },
	{ 0x884bb40c, "scsi_device_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x7d82f045, "__scsi_execute" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0xce6a1115, "blk_rq_append_bio" },
	{ 0x4c5795ec, "bio_add_pc_page" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xa5d06444, "passthrough_parse_cdb" },
	{ 0xaca1ff2f, "scsi_host_lookup" },
	{ 0x4de931cc, "blkdev_put" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0x28318305, "snprintf" },
	{ 0xdde3448f, "bio_put" },
	{ 0x27e1a049, "printk" },
	{ 0x6b3801c7, "transport_kunmap_data_sg" },
	{ 0x305058c4, "transport_kmap_data_sg" },
	{ 0xae97babb, "target_lun_is_rdonly" },
	{ 0xcfe0b518, "target_complete_cmd_with_length" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6156f8ac, "transport_copy_sense_to_cmd" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0xf7a3bb12, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "7C8AD98EC3869144E946556");
MODULE_INFO(rhelversion, "8.0");
