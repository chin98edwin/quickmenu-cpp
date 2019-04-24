/**
 * QuickMenu, main.h
 * @description A framework for designing menu-driven interface console programs inspired by React.
 * @author chin98edwin
 * @version 0.0.1
 */

using namespace std;

#ifndef main_h
#define main_h

#include <map>
#include <string>

/*
 * @param component
 * @param props
 */
start(Component component, map props = {}); // TODO: Dictionary type in CPP

/*
 * @param text
 * @param ifYes
 * @param ifNo
 * @param defaultResponse
 */
prompt(string text, function ifYes, function ifNo, defaultResponse = "-");

/*
 * @param width
 * @param align
 * @param text
 */
setW(int width, string align, string text);

/*
 * @param options
 * @param breakBy
 * @param bullet
 * @param vIndex
 * @param useText
 */
getGridMenu(map options, int breakBy, string bullet = "", bool vIndex = void, bool useText = false);

/*
 * @param options
 * @param breakBy
 */
vGridTransform(map options, int breakBy);

class Component {

    /*
     *
     */
    Component();

    /*
     * @param props
     */
    Component(map<string, string> props);

    /*
     *
     */
    render();

    /*
     * @param head
     * @param body
     * @param foot
     */
    componentWillPrint(string head, string body, string foot);

    /*
     * @param exception
     */
    componentDidCatch(exception);

    /*
     *
     */
    componentDidMount();

    /*
     *
     */
    componentDidLoop();

    /*
     * @param response
     * @param body
     * @param injected
     */
    componentDidReceive(string response, array body, bool injected);

    /*
     *
     */
    componentWillLoop();

    /*
     *
     */
    componentWillUnmount();

    /*
     * @param body
     */
    __stringifyBody__(array body);

    /*
     *
     */
    __launch__();

}
