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
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x9bb4082d, "mlxsw_core_res_valid" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3f123442, "mlxsw_core_kvd_sizes_get" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9d4c821d, "mlxsw_core_skb_receive" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5cf3dd79, "mlxsw_core_bus_device_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfed76a65, "mlxsw_core_bus_device_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x484489a4, "mlxsw_cmd_exec" },
	{ 0x4b464453, "mlxsw_core_res_get" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8854d198, "mlxsw_reg_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core";


MODULE_INFO(srcversion, "AE0EE76F43EB1A0D309362D");
MODULE_INFO(rhelversion, "8.0");
