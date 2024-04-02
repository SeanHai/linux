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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x6bddef80, "misc_register" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xe6478472, "_dev_info" },
	{ 0x150e16f4, "device_for_each_child" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0x657f9b87, "pcie_port_bus_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4c891562, "pci_bus_set_ops" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D0FFC9E1586B9555DE8FAA1");
MODULE_INFO(rhelversion, "8.0");
