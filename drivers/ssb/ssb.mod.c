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
	{ 0x8ec36cf, "sdio_writeb" },
	{ 0x4b073e60, "sdio_readb" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xa95765cf, "gpiochip_remove" },
	{ 0x110781ef, "gpiochip_add_data_with_key" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x8dae0862, "sdio_writel" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xf10de535, "ioread8" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xd257960c, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6d4ac0c6, "sdio_readl" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x706fcef, "sdio_writew" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf1eb5306, "pci_prepare_to_sleep" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3cbcb91a, "pci_back_from_sleep" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x28318305, "snprintf" },
	{ 0x211fdc1b, "sdio_readw" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x892d648d, "sdio_claim_host" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xfca0d49b, "sdio_release_host" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";


MODULE_INFO(srcversion, "2342FF1D252A05BAB4C3CFE");
MODULE_INFO(rhelversion, "8.0");
