#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xcace2562, "__blk_mq_end_request" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x447e56e7, "mtd_table_mutex" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0xa536ccf4, "blk_mq_unfreeze_queue" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xbb22bd22, "__put_mtd_device" },
	{ 0xa613e505, "blk_mq_freeze_queue" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf7704ee1, "__get_mtd_device" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x3c87b9a5, "blk_queue_max_discard_sectors" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xdc13bd2, "register_mtd_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x370e9154, "__mtd_next_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xaa4576c4, "unregister_mtd_user" },
	{ 0x80ff8e87, "blk_update_request" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4b3cdcb2, "blk_queue_flag_clear" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x65ff5490, "blk_mq_init_sq_queue" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb549bffc, "blk_queue_flag_set" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0x28318305, "snprintf" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x2c2cd7f7, "set_disk_ro" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "8AFBC83DC01D1EE6F6FCAAF");
MODULE_INFO(rhelversion, "8.0");
