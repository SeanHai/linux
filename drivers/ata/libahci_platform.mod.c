#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3f0c3959, "phy_init" },
	{ 0x26f93bfe, "ata_dummy_port_ops" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0xf102bfea, "ahci_save_initial_config" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xb564963c, "ata_host_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5560f09f, "ahci_reset_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0xee70ea31, "ata_port_desc" },
	{ 0xf46aaa47, "devres_alloc_node" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xffa4c99a, "phy_power_off" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6d7069ba, "ahci_print_info" },
	{ 0xf4658766, "devres_open_group" },
	{ 0xe5d80a13, "phy_power_on" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xa2e069a5, "ahci_reset_controller" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x85eeb22e, "phy_exit" },
	{ 0xf0999aef, "ahci_host_activate" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xea6bfd37, "ahci_init_controller" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd03ba39a, "devres_add" },
	{ 0xede72fec, "ahci_set_em_messages" },
	{ 0xb1166309, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x872d0c, "devm_of_phy_get" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x70c70866, "devres_remove_group" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x741a836a, "devres_release_group" },
	{ 0x9685739b, "ahci_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,libahci";


MODULE_INFO(srcversion, "43E709B7B1FBEBF8A31E484");
MODULE_INFO(rhelversion, "8.0");
