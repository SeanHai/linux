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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x63e4ea2, "memstick_unregister_driver" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x921833f8, "memstick_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4a4e5778, "memstick_init_req_sg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfd94814e, "complete_all" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcace2562, "__blk_mq_end_request" },
	{ 0x80ff8e87, "blk_update_request" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x91715312, "sprintf" },
	{ 0x1ad357ca, "blk_queue_max_segment_size" },
	{ 0x17c430a5, "blk_queue_max_segments" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x65ff5490, "blk_mq_init_sq_queue" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x787b953, "idr_alloc" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1807425a, "memstick_set_rw_addr" },
	{ 0x27e1a049, "printk" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28318305, "snprintf" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x89568a98, "memstick_new_req" },
	{ 0xae50437c, "memstick_init_req" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb43d43fd, "blk_mq_stop_hw_queues" },
	{ 0x4ce03c47, "blk_mq_start_hw_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";


MODULE_INFO(srcversion, "BE1DA2855D9B8DDD8BD595F");
MODULE_INFO(rhelversion, "8.0");
