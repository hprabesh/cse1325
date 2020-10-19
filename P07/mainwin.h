#ifndef __MAINWIN_H
#define __MAINWIN_H
#include <gtkmm.h>
#include "manga.h"
#include "label.h"
#include "store.h"
#include <string>

class Mainwin: public Gtk::Window {
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        void on_new_store_click();
        void on_new_tool_click();
        void on_new_plant_click();
        void on_new_mulch_click();
        void on_view_products_click();
        void on_quit_click();
    private:
        Store* store;
        Label* display;
        int get_int(std::string prompt);
        double get_double(std::string prompt);
        std::string get_string(std::string prompt);
}

#endif