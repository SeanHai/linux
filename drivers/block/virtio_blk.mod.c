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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xff5d0490, "register_virtio_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x6befd9d5, "blk_queue_alignment_offset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1eb86738, "blk_queue_physical_block_size" },
	{ 0x1b82c730, "blk_queue_io_opt" },
	{ 0xd9846e51, "blk_queue_io_min" },
	{ 0x3346094c, "blk_queue_logical_block_size" },
	{ 0x2c2cd7f7, "set_disk_ro" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x1ad357ca, "blk_queue_max_segment_size" },
	{ 0x51722f38, "blk_queue_max_hw_sectors" },
	{ 0x17c430a5, "blk_queue_max_segments" },
	{ 0x2ad9427a, "blk_mq_init_queue" },
	{ 0xa20b232a, "blk_mq_alloc_tag_set" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x886ca932, "blk_mq_unquiesce_queue" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1b5bc7d5, "blk_mq_stop_hw_queue" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0x67686d8e, "virtqueue_add_sgs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x8edb4c42, "blk_queue_write_cache" },
	{ 0x28318305, "snprintf" },
	{ 0x90ce9d2e, "virtio_check_driver_offered_feature" },
	{ 0xdf2dafc4, "kobject_uevent_env" },
	{ 0x898ec6cf, "revalidate_disk" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x48a91171, "string_get_size" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x754d539c, "strlen" },
	{ 0xffbf2b72, "blk_put_request" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x5ba4171c, "blk_execute_rq" },
	{ 0x1df0f826, "blk_rq_map_kern" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0x614b8240, "virtqueue_notify" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x841ebbb4, "virtqueue_kick_prepare" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc68b4f87, "blk_mq_virtio_map_queues" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x2612ff0c, "put_disk" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x121da905, "queue_work_on" },
	{ 0x42d54e91, "blk_mq_quiesce_queue" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x171ae6a0, "blk_mq_start_stopped_hw_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc244b1aa, "virtqueue_enable_cb" },
	{ 0xc811a6dd, "virtqueue_is_broken" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0x8519f7c, "blk_mq_complete_request" },
	{ 0x280160b5, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "888F31BD441B4D54D8279BD");
MODULE_INFO(rhelversion, "8.0");
