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
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x9300507b, "mempool_destroy" },
	{ 0xff5d0490, "register_virtio_driver" },
	{ 0x6a244503, "mempool_create" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x1b9f706b, "virtqueue_get_vring_size" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7efc8dd6, "blk_mq_unique_tag" },
	{ 0x27e1a049, "printk" },
	{ 0x257bfbc2, "scsi_rescan_device" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0x86c45796, "mempool_alloc" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x90ce9d2e, "virtio_check_driver_offered_feature" },
	{ 0x74b55fe, "mempool_free" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x121da905, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x614b8240, "virtqueue_notify" },
	{ 0x841ebbb4, "virtqueue_kick_prepare" },
	{ 0x67686d8e, "virtqueue_add_sgs" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xc68b4f87, "blk_mq_virtio_map_queues" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0xf6cbc819, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x29361773, "complete" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc244b1aa, "virtqueue_enable_cb" },
	{ 0xc811a6dd, "virtqueue_is_broken" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x280160b5, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000008v*");

MODULE_INFO(srcversion, "F71F21074B938FE81339BB9");
MODULE_INFO(rhelversion, "8.0");
