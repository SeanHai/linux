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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe26ab066, "vring_del_virtqueue" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x43132b0b, "pci_irq_get_affinity" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0x22713b0f, "register_virtio_device" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xd7f7b119, "virtqueue_get_used_addr" },
	{ 0x46dcd98d, "pci_find_next_capability" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3ec94667, "virtio_device_freeze" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xdc9c6226, "pci_iomap_range" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8fa7f19e, "virtqueue_get_desc_addr" },
	{ 0x59c47cb4, "unregister_virtio_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x1b9f706b, "virtqueue_get_vring_size" },
	{ 0xe6478472, "_dev_info" },
	{ 0x8e869cb5, "virtio_config_changed" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xe5c25263, "virtio_device_restore" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x40d2df0f, "vring_create_virtqueue" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2d247875, "pci_vfs_assigned" },
	{ 0x28318305, "snprintf" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x23ae428a, "virtqueue_get_avail_addr" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x6141a0d9, "vring_transport_features" },
	{ 0x18c475b, "pci_request_region" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x690924ff, "alloc_cpumask_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio_ring,virtio";

MODULE_ALIAS("pci:v00001AF4d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A5A63D032C271D7D3560551");
MODULE_INFO(rhelversion, "8.0");
