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
	{ 0xbf2021a, "sbc_attrib_attrs" },
	{ 0x8175c58a, "sbc_get_device_type" },
	{ 0x1bc703ac, "target_backend_unregister" },
	{ 0xec3f74be, "transport_backend_register" },
	{ 0xda8d2e0, "bio_integrity_add_page" },
	{ 0xd6603235, "bio_integrity_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2903ec5c, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x294477d6, "bio_add_page" },
	{ 0x7055ac91, "sbc_get_write_same_sectors" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xcd8bcc39, "bioset_integrity_create" },
	{ 0x9a15d6e2, "target_configure_unmap_from_queue" },
	{ 0xd63b3cd4, "blkdev_get_by_path" },
	{ 0x8313decc, "bioset_init" },
	{ 0xbbcc03c5, "bioset_exit" },
	{ 0x4de931cc, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x91715312, "sprintf" },
	{ 0x510145f7, "bdevname" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xd943f820, "submit_bio" },
	{ 0x987ed54e, "fs_bio_set" },
	{ 0x4863dc3, "bio_associate_blkg" },
	{ 0x80a72f1a, "bio_alloc_bioset" },
	{ 0xdde3448f, "bio_put" },
	{ 0xf7a3bb12, "target_complete_cmd" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0x9529e705, "blkdev_issue_discard" },
	{ 0x864db162, "target_to_linux_sector" },
	{ 0xd3901d9f, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "0690F7A4D9A39036330C8CE");
MODULE_INFO(rhelversion, "8.0");
